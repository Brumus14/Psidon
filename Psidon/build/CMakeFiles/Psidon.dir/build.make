# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build

# Include any dependencies generated for this target.
include CMakeFiles/Psidon.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Psidon.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Psidon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Psidon.dir/flags.make

CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o: CMakeFiles/Psidon.dir/flags.make
CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o: /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Logger/Logger.cpp
CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o: CMakeFiles/Psidon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o -MF CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o.d -o CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o -c /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Logger/Logger.cpp

CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Logger/Logger.cpp > CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.i

CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Logger/Logger.cpp -o CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.s

CMakeFiles/Psidon.dir/src/Events/Events.cpp.o: CMakeFiles/Psidon.dir/flags.make
CMakeFiles/Psidon.dir/src/Events/Events.cpp.o: /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Events/Events.cpp
CMakeFiles/Psidon.dir/src/Events/Events.cpp.o: CMakeFiles/Psidon.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Psidon.dir/src/Events/Events.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Psidon.dir/src/Events/Events.cpp.o -MF CMakeFiles/Psidon.dir/src/Events/Events.cpp.o.d -o CMakeFiles/Psidon.dir/src/Events/Events.cpp.o -c /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Events/Events.cpp

CMakeFiles/Psidon.dir/src/Events/Events.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Psidon.dir/src/Events/Events.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Events/Events.cpp > CMakeFiles/Psidon.dir/src/Events/Events.cpp.i

CMakeFiles/Psidon.dir/src/Events/Events.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Psidon.dir/src/Events/Events.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/src/Events/Events.cpp -o CMakeFiles/Psidon.dir/src/Events/Events.cpp.s

# Object files for target Psidon
Psidon_OBJECTS = \
"CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o" \
"CMakeFiles/Psidon.dir/src/Events/Events.cpp.o"

# External object files for target Psidon
Psidon_EXTERNAL_OBJECTS =

libPsidon.so: CMakeFiles/Psidon.dir/src/Logger/Logger.cpp.o
libPsidon.so: CMakeFiles/Psidon.dir/src/Events/Events.cpp.o
libPsidon.so: CMakeFiles/Psidon.dir/build.make
libPsidon.so: CMakeFiles/Psidon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library libPsidon.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Psidon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Psidon.dir/build: libPsidon.so
.PHONY : CMakeFiles/Psidon.dir/build

CMakeFiles/Psidon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Psidon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Psidon.dir/clean

CMakeFiles/Psidon.dir/depend:
	cd /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build /home/brumus/Documents/Code/C++/BGFX/Psidon/Psidon/build/CMakeFiles/Psidon.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Psidon.dir/depend

