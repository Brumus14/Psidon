cmake_minimum_required(VERSION 3.28)

project(Psidon VERSION 1.0.0 DESCRIPTION "Psidon Engine")

add_library(Psidon SHARED
  src/Psidon/Application.cpp
)

# set_target_properties(Psidon PROPERTIES VERSION ${PROJECT_VERSION})
# set_target_properties(Psidon PROPERTIES SOVERSION ${PROJECT_VERSION_MAJOR})
# set_target_properties(Psidon PROPERTIES PUBLIC_HEADER src/test.hpp)

target_include_directories(Psidon PRIVATE .)
target_include_directories(Psidon PRIVATE include)
target_include_directories(Psidon PRIVATE src)
target_include_directories(Psidon PRIVATE lib/spdlog/include)
