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
include CMakeFiles/pyramid.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/pyramid.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/pyramid.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pyramid.dir/flags.make

CMakeFiles/pyramid.dir/zyx/pyramid.cpp.obj: CMakeFiles/pyramid.dir/flags.make
CMakeFiles/pyramid.dir/zyx/pyramid.cpp.obj: ../zyx/pyramid.cpp
CMakeFiles/pyramid.dir/zyx/pyramid.cpp.obj: CMakeFiles/pyramid.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/pyramid.dir/zyx/pyramid.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/pyramid.dir/zyx/pyramid.cpp.obj -MF CMakeFiles\pyramid.dir\zyx\pyramid.cpp.obj.d -o CMakeFiles\pyramid.dir\zyx\pyramid.cpp.obj -c D:\Desktop\ACM\zyx\pyramid.cpp

CMakeFiles/pyramid.dir/zyx/pyramid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/pyramid.dir/zyx/pyramid.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\zyx\pyramid.cpp > CMakeFiles\pyramid.dir\zyx\pyramid.cpp.i

CMakeFiles/pyramid.dir/zyx/pyramid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/pyramid.dir/zyx/pyramid.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\zyx\pyramid.cpp -o CMakeFiles\pyramid.dir\zyx\pyramid.cpp.s

# Object files for target pyramid
pyramid_OBJECTS = \
"CMakeFiles/pyramid.dir/zyx/pyramid.cpp.obj"

# External object files for target pyramid
pyramid_EXTERNAL_OBJECTS =

pyramid.exe: CMakeFiles/pyramid.dir/zyx/pyramid.cpp.obj
pyramid.exe: CMakeFiles/pyramid.dir/build.make
pyramid.exe: CMakeFiles/pyramid.dir/linklibs.rsp
pyramid.exe: CMakeFiles/pyramid.dir/objects1.rsp
pyramid.exe: CMakeFiles/pyramid.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable pyramid.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pyramid.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pyramid.dir/build: pyramid.exe
.PHONY : CMakeFiles/pyramid.dir/build

CMakeFiles/pyramid.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pyramid.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pyramid.dir/clean

CMakeFiles/pyramid.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles\pyramid.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pyramid.dir/depend
