cmake_minimum_required(VERSION 3.28)

project(Psidon VERSION 1.0.0 DESCRIPTION "Psidon Engine")

set(CMAKE_CXX_STANDARD 20)

add_library(Psidon SHARED
  src/Log/Log.cpp
  src/Events/Events.cpp
  src/Window/Window.cpp
)

# set_target_properties(Psidon PROPERTIES VERSION ${PROJECT_VERSION})
# set_target_properties(Psidon PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
# set_target_properties(Psidon PROPERTIES PUBLIC_HEADER src/test.hpp)

target_include_directories(Psidon PRIVATE src)
target_include_directories(Psidon PRIVATE lib/glfw/include)
# target_include_directories(Psidon PRIVATE lib/bgfx/include)
# target_link_directories(Psidon PRIVATE lib/bgfx/.build/linux64_gcc/bin)

target_link_libraries(Psidon glfw) # bgfx-shared-libDebug GL X11 pthread rt
