#ifndef MAIN_H
#define MAIN_H
#include "../include/logmanager.h"
#include "../include/util.h"
namespace dualarms {
class CRoot {
 public:
  CRoot();
  ~CRoot();
  void run();

 private:
  dualarms::utils::Logger m_log_manager;
};
}  // namespace dualarms
#endif
