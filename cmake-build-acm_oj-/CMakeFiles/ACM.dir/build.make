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
include CMakeFiles/ACM.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ACM.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ACM.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ACM.dir/flags.make

CMakeFiles/ACM.dir/main.cpp.obj: CMakeFiles/ACM.dir/flags.make
CMakeFiles/ACM.dir/main.cpp.obj: ../main.cpp
CMakeFiles/ACM.dir/main.cpp.obj: CMakeFiles/ACM.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ACM.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ACM.dir/main.cpp.obj -MF CMakeFiles\ACM.dir\main.cpp.obj.d -o CMakeFiles\ACM.dir\main.cpp.obj -c D:\Desktop\ACM\main.cpp

CMakeFiles/ACM.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ACM.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\main.cpp > CMakeFiles\ACM.dir\main.cpp.i

CMakeFiles/ACM.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ACM.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\main.cpp -o CMakeFiles\ACM.dir\main.cpp.s

# Object files for target ACM
ACM_OBJECTS = \
"CMakeFiles/ACM.dir/main.cpp.obj"

# External object files for target ACM
ACM_EXTERNAL_OBJECTS =

ACM.exe: CMakeFiles/ACM.dir/main.cpp.obj
ACM.exe: CMakeFiles/ACM.dir/build.make
ACM.exe: CMakeFiles/ACM.dir/linklibs.rsp
ACM.exe: CMakeFiles/ACM.dir/objects1.rsp
ACM.exe: CMakeFiles/ACM.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ACM.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\ACM.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ACM.dir/build: ACM.exe
.PHONY : CMakeFiles/ACM.dir/build

CMakeFiles/ACM.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\ACM.dir\cmake_clean.cmake
.PHONY : CMakeFiles/ACM.dir/clean

CMakeFiles/ACM.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles\ACM.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ACM.dir/depend

