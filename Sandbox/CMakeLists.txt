cmake_minimum_required(VERSION 3.28)

project(Sandbox)

include_directories(Sandbox PRIVATE .)
include_directories(Sandbox PRIVATE include)
include_directories(Sandbox PRIVATE src)

link_directories("../Psidon/build")

include_directories("../Psidon/src")

add_executable(Sand src/SandboxApp.cpp)
target_link_libraries(Sand Psidon)
