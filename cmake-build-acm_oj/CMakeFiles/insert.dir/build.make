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
include CMakeFiles/insert.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/insert.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/insert.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/insert.dir/flags.make

CMakeFiles/insert.dir/Templates_Code/insert.cpp.obj: CMakeFiles/insert.dir/flags.make
CMakeFiles/insert.dir/Templates_Code/insert.cpp.obj: ../Templates_Code/insert.cpp
CMakeFiles/insert.dir/Templates_Code/insert.cpp.obj: CMakeFiles/insert.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/insert.dir/Templates_Code/insert.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/insert.dir/Templates_Code/insert.cpp.obj -MF CMakeFiles\insert.dir\Templates_Code\insert.cpp.obj.d -o CMakeFiles\insert.dir\Templates_Code\insert.cpp.obj -c D:\Desktop\ACM\Templates_Code\insert.cpp

CMakeFiles/insert.dir/Templates_Code/insert.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/insert.dir/Templates_Code/insert.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\Templates_Code\insert.cpp > CMakeFiles\insert.dir\Templates_Code\insert.cpp.i

CMakeFiles/insert.dir/Templates_Code/insert.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/insert.dir/Templates_Code/insert.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\Templates_Code\insert.cpp -o CMakeFiles\insert.dir\Templates_Code\insert.cpp.s

# Object files for target insert
insert_OBJECTS = \
"CMakeFiles/insert.dir/Templates_Code/insert.cpp.obj"

# External object files for target insert
insert_EXTERNAL_OBJECTS =

insert.exe: CMakeFiles/insert.dir/Templates_Code/insert.cpp.obj
insert.exe: CMakeFiles/insert.dir/build.make
insert.exe: CMakeFiles/insert.dir/linklibs.rsp
insert.exe: CMakeFiles/insert.dir/objects1.rsp
insert.exe: CMakeFiles/insert.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable insert.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\insert.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/insert.dir/build: insert.exe
.PHONY : CMakeFiles/insert.dir/build

CMakeFiles/insert.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\insert.dir\cmake_clean.cmake
.PHONY : CMakeFiles/insert.dir/clean

CMakeFiles/insert.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-acm_oj D:\Desktop\ACM\cmake-build-acm_oj D:\Desktop\ACM\cmake-build-acm_oj\CMakeFiles\insert.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/insert.dir/depend
