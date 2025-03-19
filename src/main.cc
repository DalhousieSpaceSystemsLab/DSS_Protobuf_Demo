#include "command_lib.h"
#include "command_protocal.pb.h"
#include <cstdint>
#include <fcntl.h>
#include <pthread.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

#define MAXLEN 256

const char *fifo_pipe_to_2 = "/tmp/fifo_pipe_to_2";
const char *fifo_pipe_to_1 = "/tmp/fifo_pipe_to_1";

char read_buffer[MAXLEN];
char write_buffer[MAXLEN];
int proc_num;
uint32_t signature = 0;

typedef enum { SEND, KILL } READER_COMMAND;

struct {
  bool ready;
  bool kill;
  unsigned int bytes;
} reader_state;

struct {
  bool ready;
  unsigned int bytes;
  READER_COMMAND cmd;
} inputer_state;

int get_proc_number(int argc, char **argv);
void write_message();
void *reader(void *nil);
void *inputer(void *nil);

int main(int argc, char *argv[]) {
  pthread_t preader, pinputer;

  // Set process number
  proc_num = get_proc_number(argc, argv);

  // Create named pipes (incase they're not already created)
  mkfifo(fifo_pipe_to_2, 0660);
  mkfifo(fifo_pipe_to_1, 0660);

  // Create state for communication with reader
  reader_state.ready = false;
  reader_state.kill = false;

  // Create state for communication with inputer
  inputer_state.ready = false;

  printf("Send a message or type \"exit\" to stop the program\n");

  pthread_create(&pinputer, NULL, inputer, (void *)NULL);
  pthread_create(&preader, NULL, reader, (void *)NULL);

  bool kill_all = false;
  while (!kill_all) {
    if (inputer_state.ready) {
      if (inputer_state.cmd == KILL) {
        kill_all = true;
      } else if (inputer_state.cmd == SEND) {
        printf("Sending message\n");
        write_message();
      }

      inputer_state.ready = false;
    }

    if (reader_state.ready) {
      command::Command recvCommand;
      recvCommand.ParseFromArray(read_buffer, (int)MAXLEN);
      const std::string debug_string = recvCommand.DebugString();
      printf("Message recived (%d)\n%s", reader_state.bytes,
             debug_string.c_str());

      reader_state.ready = false;
    }
  }

  reader_state.kill = true;

  pthread_join(pinputer, NULL);
  pthread_join(preader, NULL);

  return 0;
}

int get_proc_number(int argc, char **argv) {
  // Exit if process numbers wasn't specified
  if (argc < 2) {
    fprintf(stderr, "Usage: [1|2]\nMust specify either process 1 or 2");
    exit(-1);
  }

  // Exit if process number is invalid
  int proc_num = atoi(argv[1]);
  if (proc_num != 1 && proc_num != 2) {
    fprintf(stderr, "Usage: [1|2]\nMust specify either process 1 or 2");
    exit(-1);
  }

  return proc_num;
}

void write_message() {
  const char *write_fifo = (proc_num == 1) ? fifo_pipe_to_2 : fifo_pipe_to_1;
  int pipe_desc = open(write_fifo, O_WRONLY);
  write(pipe_desc, write_buffer, inputer_state.bytes);
  fsync(pipe_desc);
  close(pipe_desc);
}

void *reader(void *nil) {
  // Setup read pipe
  const char *read_fifo = (proc_num == 1) ? fifo_pipe_to_1 : fifo_pipe_to_2;
  int pipe_desc = open(read_fifo, O_RDONLY | O_NONBLOCK);
  unsigned int bytes = 0;
  int pnread = 0;

  while (reader_state.kill != true) {
    if (reader_state.ready == true)
      continue;

    int nread = read(pipe_desc, &read_buffer[bytes], MAXLEN);

    if (nread > 0) {
      bytes += nread;
    }

    if (bytes > 0 &&
        (read_buffer[bytes - 1] == '\n' || read_buffer[bytes - 1] == '\0')) {
      read_buffer[bytes - 1] = '\0';
      reader_state.bytes = bytes;
      bytes = 0;
      reader_state.ready = true;
    }

    pnread = nread;
  }

  close(pipe_desc);

  return NULL;
}

void *inputer(void *nil) {
  while (true) {
    if (inputer_state.ready == true)
      continue;

    unsigned bytes = 0;
    int c = 0;

    while (c != '\n' && c != EOF) {
      c = getchar();
      write_buffer[bytes++] = c;
    }
    write_buffer[bytes] = '\0';

    if (strcmp(write_buffer, "exit") == 0) {
      inputer_state.cmd = KILL;
      inputer_state.ready = true;
      break;
    }

    const char *delim = ",";
    char *token = strtok(write_buffer, delim);
    uint32_t cmd = atoi(token);
    token = strtok(NULL, delim);
    command::Device src = (command::Device)atoi(token);
    token = strtok(NULL, delim);
    command::Device dst = (command::Device)atoi(token);

    command::Command command = create_command(cmd, src, dst, signature);

    command.SerializePartialToArray(write_buffer, MAXLEN);
    inputer_state.bytes = command.ByteSizeLong();
    inputer_state.cmd = SEND;

    inputer_state.ready = true;
  }

  return NULL;
}
