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
CMAKE_BINARY_DIR = D:\Desktop\ACM\cmake-build-reverse

# Include any dependencies generated for this target.
include CMakeFiles/B.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/B.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/B.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/B.dir/flags.make

CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.obj: CMakeFiles/B.dir/flags.make
CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.obj: ../ACM-BinarySearch/B.cpp
CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.obj: CMakeFiles/B.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-reverse\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.obj -MF CMakeFiles\B.dir\ACM-BinarySearch\B.cpp.obj.d -o CMakeFiles\B.dir\ACM-BinarySearch\B.cpp.obj -c D:\Desktop\ACM\ACM-BinarySearch\B.cpp

CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\ACM-BinarySearch\B.cpp > CMakeFiles\B.dir\ACM-BinarySearch\B.cpp.i

CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\ACM-BinarySearch\B.cpp -o CMakeFiles\B.dir\ACM-BinarySearch\B.cpp.s

# Object files for target B
B_OBJECTS = \
"CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.obj"

# External object files for target B
B_EXTERNAL_OBJECTS =

B.exe: CMakeFiles/B.dir/ACM-BinarySearch/B.cpp.obj
B.exe: CMakeFiles/B.dir/build.make
B.exe: CMakeFiles/B.dir/linklibs.rsp
B.exe: CMakeFiles/B.dir/objects1.rsp
B.exe: CMakeFiles/B.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-reverse\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable B.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\B.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/B.dir/build: B.exe
.PHONY : CMakeFiles/B.dir/build

CMakeFiles/B.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\B.dir\cmake_clean.cmake
.PHONY : CMakeFiles/B.dir/clean

CMakeFiles/B.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-reverse D:\Desktop\ACM\cmake-build-reverse D:\Desktop\ACM\cmake-build-reverse\CMakeFiles\B.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/B.dir/depend

