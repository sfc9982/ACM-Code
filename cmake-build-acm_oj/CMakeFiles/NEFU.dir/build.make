# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.21

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\Program Files\JetBrains\Toolbox\apps\CLion\ch-0\213.6777.58\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\Toolbox\apps\CLion\ch-0\213.6777.58\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Desktop\ACM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Desktop\ACM\cmake-build-acm_oj

# Include any dependencies generated for this target.
include CMakeFiles/NEFU.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NEFU.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NEFU.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NEFU.dir/flags.make

CMakeFiles/NEFU.dir/NEFU.cpp.obj: CMakeFiles/NEFU.dir/flags.make
CMakeFiles/NEFU.dir/NEFU.cpp.obj: ../NEFU.cpp
CMakeFiles/NEFU.dir/NEFU.cpp.obj: CMakeFiles/NEFU.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NEFU.dir/NEFU.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/NEFU.dir/NEFU.cpp.obj -MF CMakeFiles\NEFU.dir\NEFU.cpp.obj.d -o CMakeFiles\NEFU.dir\NEFU.cpp.obj -c D:\Desktop\ACM\NEFU.cpp

CMakeFiles/NEFU.dir/NEFU.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NEFU.dir/NEFU.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\NEFU.cpp > CMakeFiles\NEFU.dir\NEFU.cpp.i

CMakeFiles/NEFU.dir/NEFU.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NEFU.dir/NEFU.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\NEFU.cpp -o CMakeFiles\NEFU.dir\NEFU.cpp.s

# Object files for target NEFU
NEFU_OBJECTS = \
"CMakeFiles/NEFU.dir/NEFU.cpp.obj"

# External object files for target NEFU
NEFU_EXTERNAL_OBJECTS =

NEFU.exe: CMakeFiles/NEFU.dir/NEFU.cpp.obj
NEFU.exe: CMakeFiles/NEFU.dir/build.make
NEFU.exe: CMakeFiles/NEFU.dir/linklibs.rsp
NEFU.exe: CMakeFiles/NEFU.dir/objects1.rsp
NEFU.exe: CMakeFiles/NEFU.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable NEFU.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\NEFU.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NEFU.dir/build: NEFU.exe
.PHONY : CMakeFiles/NEFU.dir/build

CMakeFiles/NEFU.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\NEFU.dir\cmake_clean.cmake
.PHONY : CMakeFiles/NEFU.dir/clean

CMakeFiles/NEFU.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-acm_oj D:\Desktop\ACM\cmake-build-acm_oj D:\Desktop\ACM\cmake-build-acm_oj\CMakeFiles\NEFU.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NEFU.dir/depend

