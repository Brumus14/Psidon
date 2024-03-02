cmake_minimum_required(VERSION 3.28)

project(Psidon VERSION 1.0.0 DESCRIPTION "Psidon Engine")

set(CMAKE_CXX_STANDARD 20)

add_library(Psidon SHARED
  src/Logger/Logger.cpp
)

# set_target_properties(Psidon PROPERTIES VERSION ${PROJECT_VERSION})
# set_target_properties(Psidon PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
# set_target_properties(Psidon PROPERTIES PUBLIC_HEADER src/test.hpp)

include_directories("src")
