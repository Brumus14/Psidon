cmake_minimum_required(VERSION 3.28)

project(Sandbox)

set(CMAKE_CXX_STANDARD 20)

include_directories(Sandbox PRIVATE .)
include_directories(Sandbox PRIVATE include)
include_directories(Sandbox PRIVATE src)

link_directories("../Psidon/build")

include_directories("../Psidon/include")

add_executable(Sand src/Main.cpp)
target_link_libraries(Sand Psidon)
