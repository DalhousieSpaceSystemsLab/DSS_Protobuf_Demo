#include "command_lib.h"
#include "command_protocal.pb.h"
#include <time.h>

command::Command create_command(uint32_t cmd, command::Device src,
                                command::Device dst, uint32_t sig) {
  command::Command comm;
  comm.set_cmd(cmd);
  comm.set_src(src);
  comm.set_dst(dst);
  comm.set_sig(sig);
  comm.set_dtt(time(NULL));

  return comm;
}
