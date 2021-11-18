#include "../include/main.h"

#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

#include "../include/logmanager.h"

namespace dualarms {
CRoot::CRoot(void) { m_log_manager.initFromConfig("logconfig"); }
CRoot::~CRoot(void) {}
void CRoot::run() { dualarms::utils::test_method(); }
}  // namespace dualarms

static bool flag = true;
void handler(int);

int main() {
  /* dualarms::utils::test_method(); */
  dualarms::CRoot* root = new dualarms::CRoot();
  time_t t;
  int fd;
  if (-1 == daemon(0, 0)) {
    ERROR("daemon error ");
    exit(1);
  }
  struct sigaction act;
  act.sa_handler = handler;
  sigemptyset(&act.sa_mask);
  act.sa_flags = 0;
  if (sigaction(SIGQUIT, &act, NULL)) {
    ERROR("sigaction error ");
    exit(0);
  }
  while (flag) {
    TRACE(" This is trce");
    fd = open("/home/roley/daemon.log", O_WRONLY | O_CREAT | O_APPEND, 0644);

    if (fd == -1) {
      printf("open error\n");
    }
    t = time(0);
    char* buf = asctime(localtime(&t));
    write(fd, buf, strlen(buf));
    close(fd);
    root->run();
    TRACE("daemon runing.....{}");
    sleep(5);
  }
  /* DEBUG("This is debug"); */
  /* INFO("This is info"); */
  /* WARN("This is warn"); */
  /* ERROR("This is error"); */
  /* FATAL("This is fatal"); */
  /* root->run(); */
  /* ASSERT("***+++***", "This is asset"); */
  /* root.run(); */
  delete root;
  return 0;
}

void handler(int sig) {
  printf(" Process got a signal %d, quitting...", sig);
  /* BOOST_LOG_TRIVIAL(trace) << sig; */
  flag = false;
}
