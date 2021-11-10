#include "../include/util.h"

#include <stdio.h>

#include "../include/log.h"

namespace dualarms {
namespace utils {
void test_method() {
  DEBUG(" TEST METHOD===")
  printf("hello world!\n");
}
std::string test_str() { return "hello World!"; }
}  // namespace utils
}  // namespace dualarms
