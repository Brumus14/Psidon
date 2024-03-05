#pragma once

#if defined(_WIN32) || defined(_WIN64)
  #define PSI_PLATFORM_WINDOWS
#elif defined(__linux__)
  #define PSI_PLATFORM_LINUX
#elif defined(__APPLE__) || defined(__MACH__)
  #define PSI_PLATFORM_MACOS
#endif
