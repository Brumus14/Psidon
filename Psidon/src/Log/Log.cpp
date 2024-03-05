#include "Log.hpp"

#include <iostream>
#include <format>

namespace Psi {
  std::chrono::time_point<std::chrono::system_clock> Log::currentTimePoint;
  std::time_t Log::currentTime;
  std::tm * Log::timeInfo;
  std::chrono::time_point<std::chrono::system_clock> Log::cachedTimeExpiration;
  std::string Log::timeString;

  void Log::Info(const std::string & text) {
    std::cout << infoPrefixString << GetCurrentTimeString() << "] " << text << "\033[0m\n";
  }

  void Log::Warning(const std::string & text) {
    std::cout << warningPrefixString << GetCurrentTimeString() << "] " << text << "\033[0m\n";
  }

  void Log::Critical(const std::string & text) {
    std::cout << criticalPrefixString << GetCurrentTimeString() << "] " << text << "\033[0m\n";
  }

  std::string Log::GetCurrentTimeString() {
    currentTimePoint = std::chrono::system_clock::now();

    if (currentTimePoint > cachedTimeExpiration) {
      currentTime = std::chrono::system_clock::to_time_t(currentTimePoint);
      timeInfo = std::localtime(&currentTime);
      timeString = std::to_string(timeInfo->tm_hour) + ':' + std::to_string(timeInfo->tm_min) + ':' + std::to_string(timeInfo->tm_sec);
      cachedTimeExpiration = currentTimePoint + std::chrono::seconds(1);
    }

    return timeString;
  }
}
