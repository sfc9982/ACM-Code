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
include CMakeFiles/lr.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/lr.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/lr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lr.dir/flags.make

CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.obj: CMakeFiles/lr.dir/flags.make
CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.obj: ../Classmates-Shitty-Code/lr.cpp
CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.obj: CMakeFiles/lr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-reverse\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.obj -MF CMakeFiles\lr.dir\Classmates-Shitty-Code\lr.cpp.obj.d -o CMakeFiles\lr.dir\Classmates-Shitty-Code\lr.cpp.obj -c D:\Desktop\ACM\Classmates-Shitty-Code\lr.cpp

CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\Classmates-Shitty-Code\lr.cpp > CMakeFiles\lr.dir\Classmates-Shitty-Code\lr.cpp.i

CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\Classmates-Shitty-Code\lr.cpp -o CMakeFiles\lr.dir\Classmates-Shitty-Code\lr.cpp.s

# Object files for target lr
lr_OBJECTS = \
"CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.obj"

# External object files for target lr
lr_EXTERNAL_OBJECTS =

lr.exe: CMakeFiles/lr.dir/Classmates-Shitty-Code/lr.cpp.obj
lr.exe: CMakeFiles/lr.dir/build.make
lr.exe: CMakeFiles/lr.dir/linklibs.rsp
lr.exe: CMakeFiles/lr.dir/objects1.rsp
lr.exe: CMakeFiles/lr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-reverse\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lr.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lr.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lr.dir/build: lr.exe
.PHONY : CMakeFiles/lr.dir/build

CMakeFiles/lr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lr.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lr.dir/clean

CMakeFiles/lr.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-reverse D:\Desktop\ACM\cmake-build-reverse D:\Desktop\ACM\cmake-build-reverse\CMakeFiles\lr.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lr.dir/depend

