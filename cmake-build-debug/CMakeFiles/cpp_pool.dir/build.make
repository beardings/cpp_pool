# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mponomar/cpp_pool

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mponomar/cpp_pool/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/cpp_pool.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cpp_pool.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cpp_pool.dir/flags.make

CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o: CMakeFiles/cpp_pool.dir/flags.make
CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o: ../day01/ex02/Zombie.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mponomar/cpp_pool/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o -c /Users/mponomar/cpp_pool/day01/ex02/Zombie.cpp

CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mponomar/cpp_pool/day01/ex02/Zombie.cpp > CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.i

CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mponomar/cpp_pool/day01/ex02/Zombie.cpp -o CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.s

CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.requires:

.PHONY : CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.requires

CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.provides: CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp_pool.dir/build.make CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.provides.build
.PHONY : CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.provides

CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.provides.build: CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o


CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o: CMakeFiles/cpp_pool.dir/flags.make
CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o: ../day01/ex02/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mponomar/cpp_pool/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o -c /Users/mponomar/cpp_pool/day01/ex02/main.cpp

CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mponomar/cpp_pool/day01/ex02/main.cpp > CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.i

CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mponomar/cpp_pool/day01/ex02/main.cpp -o CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.s

CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.requires:

.PHONY : CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.requires

CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.provides: CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp_pool.dir/build.make CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.provides.build
.PHONY : CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.provides

CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.provides.build: CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o


CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o: CMakeFiles/cpp_pool.dir/flags.make
CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o: ../day01/ex02/ZombieEvent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mponomar/cpp_pool/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o -c /Users/mponomar/cpp_pool/day01/ex02/ZombieEvent.cpp

CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mponomar/cpp_pool/day01/ex02/ZombieEvent.cpp > CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.i

CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mponomar/cpp_pool/day01/ex02/ZombieEvent.cpp -o CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.s

CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.requires:

.PHONY : CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.requires

CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.provides: CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.requires
	$(MAKE) -f CMakeFiles/cpp_pool.dir/build.make CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.provides.build
.PHONY : CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.provides

CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.provides.build: CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o


# Object files for target cpp_pool
cpp_pool_OBJECTS = \
"CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o" \
"CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o" \
"CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o"

# External object files for target cpp_pool
cpp_pool_EXTERNAL_OBJECTS =

cpp_pool: CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o
cpp_pool: CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o
cpp_pool: CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o
cpp_pool: CMakeFiles/cpp_pool.dir/build.make
cpp_pool: CMakeFiles/cpp_pool.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mponomar/cpp_pool/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable cpp_pool"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cpp_pool.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cpp_pool.dir/build: cpp_pool

.PHONY : CMakeFiles/cpp_pool.dir/build

CMakeFiles/cpp_pool.dir/requires: CMakeFiles/cpp_pool.dir/day01/ex02/Zombie.cpp.o.requires
CMakeFiles/cpp_pool.dir/requires: CMakeFiles/cpp_pool.dir/day01/ex02/main.cpp.o.requires
CMakeFiles/cpp_pool.dir/requires: CMakeFiles/cpp_pool.dir/day01/ex02/ZombieEvent.cpp.o.requires

.PHONY : CMakeFiles/cpp_pool.dir/requires

CMakeFiles/cpp_pool.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cpp_pool.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cpp_pool.dir/clean

CMakeFiles/cpp_pool.dir/depend:
	cd /Users/mponomar/cpp_pool/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mponomar/cpp_pool /Users/mponomar/cpp_pool /Users/mponomar/cpp_pool/cmake-build-debug /Users/mponomar/cpp_pool/cmake-build-debug /Users/mponomar/cpp_pool/cmake-build-debug/CMakeFiles/cpp_pool.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cpp_pool.dir/depend

