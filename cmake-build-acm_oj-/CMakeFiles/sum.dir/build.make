# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\Toolbox\apps\CLion\ch-0\221.5080.224\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\Desktop\ACM

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\Desktop\ACM\cmake-build-acm_oj-

# Include any dependencies generated for this target.
include CMakeFiles/sum.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/sum.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/sum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/sum.dir/flags.make

CMakeFiles/sum.dir/zyx/sum.cpp.obj: CMakeFiles/sum.dir/flags.make
CMakeFiles/sum.dir/zyx/sum.cpp.obj: ../zyx/sum.cpp
CMakeFiles/sum.dir/zyx/sum.cpp.obj: CMakeFiles/sum.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/sum.dir/zyx/sum.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/sum.dir/zyx/sum.cpp.obj -MF CMakeFiles\sum.dir\zyx\sum.cpp.obj.d -o CMakeFiles\sum.dir\zyx\sum.cpp.obj -c D:\Desktop\ACM\zyx\sum.cpp

CMakeFiles/sum.dir/zyx/sum.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/sum.dir/zyx/sum.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\zyx\sum.cpp > CMakeFiles\sum.dir\zyx\sum.cpp.i

CMakeFiles/sum.dir/zyx/sum.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/sum.dir/zyx/sum.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\zyx\sum.cpp -o CMakeFiles\sum.dir\zyx\sum.cpp.s

# Object files for target sum
sum_OBJECTS = \
"CMakeFiles/sum.dir/zyx/sum.cpp.obj"

# External object files for target sum
sum_EXTERNAL_OBJECTS =

sum.exe: CMakeFiles/sum.dir/zyx/sum.cpp.obj
sum.exe: CMakeFiles/sum.dir/build.make
sum.exe: CMakeFiles/sum.dir/linklibs.rsp
sum.exe: CMakeFiles/sum.dir/objects1.rsp
sum.exe: CMakeFiles/sum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable sum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\sum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/sum.dir/build: sum.exe
.PHONY : CMakeFiles/sum.dir/build

CMakeFiles/sum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\sum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/sum.dir/clean

CMakeFiles/sum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles\sum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/sum.dir/depend

