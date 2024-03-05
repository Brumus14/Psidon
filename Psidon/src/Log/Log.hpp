#pragma once

#include <chrono>
#include <string>

namespace Psi {
  class Log {
  public:
    static void Info(const std::string & text);
    static void Warning(const std::string & text);
    static void Critical(const std::string & text);

  private:
    // Time variables
    static std::chrono::time_point<std::chrono::system_clock> currentTimePoint;
    static std::time_t currentTime;
    static std::tm * timeInfo;
    static std::chrono::time_point<std::chrono::system_clock> cachedTimeExpiration; // So variables aren't updated when time hasn't changed
    static std::string timeString;

    // Strings that are commonly used
    static constexpr const char resetString[] = "\033[0m\n";
    static constexpr const char infoPrefixString[] = "\033[30;107;1m INFO \033[0m \033[97m[";
    static constexpr const char warningPrefixString[] = "\033[30;43;1m WARN \033[0m \033[33m[";
    static constexpr const char criticalPrefixString[] = "\033[30;41;1m CRIT \033[0m \033[31m[";

    static std::string GetCurrentTimeString();
  };
}
