#include "command_protocal.pb.h"
#include <cstdint>

command::Command create_command(uint32_t cmd, command::Device src,
                                command::Device dst, uint32_t sig);
