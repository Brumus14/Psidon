cmake_minimum_required(VERSION 3.28)

project(Sandbox)

set(CMAKE_CXX_STANDARD 20)

include_directories(.)
include_directories(include)
include_directories(src)
include_directories(../Psidon/lib/glfw/include)
include_directories(../Psidon/lib/bgfx/include)
include_directories("../Psidon/include")

link_directories("../Psidon/build")
link_directories(../Psidon/lib/bgfx/.build/linux64_gcc/bin)

add_executable(Sand src/Main.cpp)
target_link_libraries(Sand Psidon glfw bgfx-shared-libDebug GL X11 pthread rt)
