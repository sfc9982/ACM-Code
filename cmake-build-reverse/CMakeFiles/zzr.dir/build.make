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
include CMakeFiles/zzr.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/zzr.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/zzr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/zzr.dir/flags.make

CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.obj: CMakeFiles/zzr.dir/flags.make
CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.obj: ../Classmates-Shitty-Code/zzr.cpp
CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.obj: CMakeFiles/zzr.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-reverse\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.obj -MF CMakeFiles\zzr.dir\Classmates-Shitty-Code\zzr.cpp.obj.d -o CMakeFiles\zzr.dir\Classmates-Shitty-Code\zzr.cpp.obj -c D:\Desktop\ACM\Classmates-Shitty-Code\zzr.cpp

CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\Classmates-Shitty-Code\zzr.cpp > CMakeFiles\zzr.dir\Classmates-Shitty-Code\zzr.cpp.i

CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\Classmates-Shitty-Code\zzr.cpp -o CMakeFiles\zzr.dir\Classmates-Shitty-Code\zzr.cpp.s

# Object files for target zzr
zzr_OBJECTS = \
"CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.obj"

# External object files for target zzr
zzr_EXTERNAL_OBJECTS =

zzr.exe: CMakeFiles/zzr.dir/Classmates-Shitty-Code/zzr.cpp.obj
zzr.exe: CMakeFiles/zzr.dir/build.make
zzr.exe: CMakeFiles/zzr.dir/linklibs.rsp
zzr.exe: CMakeFiles/zzr.dir/objects1.rsp
zzr.exe: CMakeFiles/zzr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-reverse\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable zzr.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\zzr.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/zzr.dir/build: zzr.exe
.PHONY : CMakeFiles/zzr.dir/build

CMakeFiles/zzr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zzr.dir\cmake_clean.cmake
.PHONY : CMakeFiles/zzr.dir/clean

CMakeFiles/zzr.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-reverse D:\Desktop\ACM\cmake-build-reverse D:\Desktop\ACM\cmake-build-reverse\CMakeFiles\zzr.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/zzr.dir/depend
