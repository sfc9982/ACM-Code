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
include CMakeFiles/D.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/D.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/D.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/D.dir/flags.make

CMakeFiles/D.dir/HLJCPC/D.cpp.obj: CMakeFiles/D.dir/flags.make
CMakeFiles/D.dir/HLJCPC/D.cpp.obj: ../HLJCPC/D.cpp
CMakeFiles/D.dir/HLJCPC/D.cpp.obj: CMakeFiles/D.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/D.dir/HLJCPC/D.cpp.obj"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/D.dir/HLJCPC/D.cpp.obj -MF CMakeFiles\D.dir\HLJCPC\D.cpp.obj.d -o CMakeFiles\D.dir\HLJCPC\D.cpp.obj -c D:\Desktop\ACM\HLJCPC\D.cpp

CMakeFiles/D.dir/HLJCPC/D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/D.dir/HLJCPC/D.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\Desktop\ACM\HLJCPC\D.cpp > CMakeFiles\D.dir\HLJCPC\D.cpp.i

CMakeFiles/D.dir/HLJCPC/D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/D.dir/HLJCPC/D.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\Desktop\ACM\HLJCPC\D.cpp -o CMakeFiles\D.dir\HLJCPC\D.cpp.s

# Object files for target D
D_OBJECTS = \
"CMakeFiles/D.dir/HLJCPC/D.cpp.obj"

# External object files for target D
D_EXTERNAL_OBJECTS =

D.exe: CMakeFiles/D.dir/HLJCPC/D.cpp.obj
D.exe: CMakeFiles/D.dir/build.make
D.exe: CMakeFiles/D.dir/linklibs.rsp
D.exe: CMakeFiles/D.dir/objects1.rsp
D.exe: CMakeFiles/D.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable D.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\D.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/D.dir/build: D.exe
.PHONY : CMakeFiles/D.dir/build

CMakeFiles/D.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\D.dir\cmake_clean.cmake
.PHONY : CMakeFiles/D.dir/clean

CMakeFiles/D.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\Desktop\ACM D:\Desktop\ACM D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj- D:\Desktop\ACM\cmake-build-acm_oj-\CMakeFiles\D.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/D.dir/depend

