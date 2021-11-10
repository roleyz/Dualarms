#include <spdlog/spdlog.h>

#define DEFAULT_LOGGER_NAME "logger"

#define BREAK __builtin_trap();

#ifndef CONFIG_RELEASE
  #define TRACE(...)                                        \
    if (spdlog::get(DEFAULT_LOGGER_NAME) != nullptr) {      \
      spdlog::get(DEFAULT_LOGGER_NAME)->trace(__VA_ARGS__); \
    }
  #define DEBUG(...)                                        \
    if (spdlog::get(DEFAULT_LOGGER_NAME) != nullptr) {      \
      spdlog::get(DEFAULT_LOGGER_NAME)->debug(__VA_ARGS__); \
    }
  #define INFO(...)                                        \
    if (spdlog::get(DEFAULT_LOGGER_NAME) != nullptr) {     \
      spdlog::get(DEFAULT_LOGGER_NAME)->info(__VA_ARGS__); \
    }
  #define WARN(...)                                        \
    if (spdlog::get(DEFAULT_LOGGER_NAME) != nullptr) {     \
      spdlog::get(DEFAULT_LOGGER_NAME)->warn(__VA_ARGS__); \
    }
  #define ERROR(...)                                        \
    if (spdlog::get(DEFAULT_LOGGER_NAME) != nullptr) {      \
      spdlog::get(DEFAULT_LOGGER_NAME)->error(__VA_ARGS__); \
    }
  #define FATAL(...)                                           \
    if (spdlog::get(DEFAULT_LOGGER_NAME) != nullptr) {         \
      spdlog::get(DEFAULT_LOGGER_NAME)->critical(__VA_ARGS__); \
    }
  #define ASSERT(x, msg)                                                \
    if ((x)) {                                                          \
    } else {                                                            \
      FATAL("ASSERT - {}\n\t{}\n\tin file: {}\n\ton line: {}", #x, msg, \
            __FILE__, __LINE__);                                        \
      BREAK                                                             \
    }

#else
  // Disable logging for relase builds
  #define TRACE(...) (void)0
  #define DEBUG(...) (void)0
  #define INFO(...) (void)0
  #define WARN(...) (void)0
  #define ERROR(...) (void)0
  #define FATAL(...) (void)0
  #define ASSERT(x, msg) (void)0
#endif
