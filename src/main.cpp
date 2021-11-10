#include "../include/main.h"

#include <stdio.h>

#include <iostream>

#include "../include/log.h"

namespace dualarms {
CRoot::CRoot(void) { m_log_manager.initialize(); }
CRoot::~CRoot(void) { m_log_manager.shutdown(); }
void CRoot::run() { dualarms::utils::test_method(); }
}  // namespace dualarms
int main() {
  /* dualarms::utils::test_method(); */
  dualarms::CRoot* root = new dualarms::CRoot();
  TRACE(" This is trce");
  DEBUG("This is debug");
  INFO("This is info");
  WARN("This is warn");
  ERROR("This is error");
  FATAL("This is fatal");
  ASSERT("***+++***", "This is asset");
  /* root.run(); */
  root->run();
  delete root;
  return 0;
}
