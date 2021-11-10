#include "../include/logmanager.h"

#include <spdlog/common.h>
#include <spdlog/logger.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

#include <memory>
#include <vector>

#include "../include/log.h"

namespace dualarms {
namespace utils {
void log_manager::initialize() {
  auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
  console_sink->set_pattern("%^[%Y-%m-%d %H:%M:%S.%e] %v%$");

  std::vector<spdlog::sink_ptr> sinks{console_sink};
  auto logger = std::make_shared<spdlog::logger>(DEFAULT_LOGGER_NAME,
                                                 sinks.begin(), sinks.end());

  /* logger->set_level(spdlog::level::trace); */
  logger->set_level(spdlog::level::trace);
  /* logger->flush_on(spdlog::level::trace); */
  logger->flush_on(spdlog::level::trace);
  spdlog::register_logger(logger);
}

void log_manager::shutdown() { spdlog::shutdown(); }
}  // namespace utils
}  // namespace dualarms
