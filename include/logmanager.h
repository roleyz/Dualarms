#ifndef LOGMANAGER_H
#define LOGMANAGER_H
#define BOOST_LOG_DYN_LINK 1
#pragma once

#include <boost/log/attributes/mutable_constant.hpp>
#include <boost/log/sources/global_logger_storage.hpp>
#include <boost/log/sources/severity_channel_logger.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/utility/manipulators/add_value.hpp>
#include <string>

BOOST_LOG_GLOBAL_LOGGER(sysLogger,
                        boost::log::sources::severity_channel_logger_mt<
                            boost::log::trivial::severity_level>);
BOOST_LOG_GLOBAL_LOGGER(dataLogger,
                        boost::log::sources::severity_channel_logger_mt<
                            boost::log::trivial::severity_level>);

namespace dualarms {
namespace utils {
class Logger {
 public:
  /// Init with default trivial logging
  static void init();

  /// @param configFileName config ini file that contains boost logging
  /// properties.
  ///        If configFileName.empty() then default initialization.
  static void initFromConfig(const std::string &configFileName);

  /// Disable logging
  static void disable();

  /// Add a file sink for LOG_DATA_* for >= INFO.
  /// This file sink will be used along with any configured via Config in
  /// init().
  static void addDataFileLog(const std::string &logFileName);
};

#define LOG_LOG_LOCATION(LOGGER, LEVEL, ARG)        \
  BOOST_LOG_SEV(LOGGER, boost::log::trivial::LEVEL) \
      << boost::log::add_value("Line", __LINE__)    \
      << boost::log::add_value("File", __FILE__)    \
      << boost::log::add_value("Function", __FUNCTION__) << ARG;

/// System Log macros.
/// TRACE < DEBUG < INFO < WARN < ERROR < FATAL
#define TRACE(ARG) LOG_LOG_LOCATION(sysLogger::get(), trace, ARG);
#define DEBUG(ARG) LOG_LOG_LOCATION(sysLogger::get(), debug, ARG);
#define INFO(ARG) LOG_LOG_LOCATION(sysLogger::get(), info, ARG);
#define WARN(ARG) LOG_LOG_LOCATION(sysLogger::get(), warning, ARG);
#define ERROR(ARG) LOG_LOG_LOCATION(sysLogger::get(), error, ARG);
#define FATAL(ARG) LOG_LOG_LOCATION(sysLogger::get(), fatal, ARG);

/// Data Log macros. Does not include LINE, FILE, FUNCTION.
/// TRACE < DEBUG < INFO < WARN < ERROR < FATAL
#define DATA_TRACE(ARG) \
  BOOST_LOG_SEV(dataLogger::get(), boost::log::trivial::trace) << ARG
#define DATA_DEBUG(ARG) \
  BOOST_LOG_SEV(dataLogger::get(), boost::log::trivial::debug) << ARG
#define DATA_INFO(ARG) \
  BOOST_LOG_SEV(dataLogger::get(), boost::log::trivial::info) << ARG
#define DATA_WARN(ARG) \
  BOOST_LOG_SEV(dataLogger::get(), boost::log::trivial::warning) << ARG
#define DATA_ERROR(ARG) \
  BOOST_LOG_SEV(dataLogger::get(), boost::log::trivial::error) << ARG
#define DATA_FATAL(ARG) \
  BOOST_LOG_SEV(dataLogger::get(), boost::log::trivial::fatal) << ARG

}  // namespace utils
}  // namespace dualarms
#endif /* LOG_LOGGER_HXX */
