# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = D:\CLion-2020.3.2.win\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = D:\CLion-2020.3.2.win\bin\cmake\win\bin\cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\78136\CLionProjects\round729

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\78136\CLionProjects\round729\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/round729.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/round729.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/round729.dir/flags.make

CMakeFiles/round729.dir/main.cpp.obj: CMakeFiles/round729.dir/flags.make
CMakeFiles/round729.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\78136\CLionProjects\round729\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/round729.dir/main.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\round729.dir\main.cpp.obj -c C:\Users\78136\CLionProjects\round729\main.cpp

CMakeFiles/round729.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/round729.dir/main.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\78136\CLionProjects\round729\main.cpp > CMakeFiles\round729.dir\main.cpp.i

CMakeFiles/round729.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/round729.dir/main.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\78136\CLionProjects\round729\main.cpp -o CMakeFiles\round729.dir\main.cpp.s

CMakeFiles/round729.dir/C.cpp.obj: CMakeFiles/round729.dir/flags.make
CMakeFiles/round729.dir/C.cpp.obj: ../C.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\78136\CLionProjects\round729\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/round729.dir/C.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\round729.dir\C.cpp.obj -c C:\Users\78136\CLionProjects\round729\C.cpp

CMakeFiles/round729.dir/C.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/round729.dir/C.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\78136\CLionProjects\round729\C.cpp > CMakeFiles\round729.dir\C.cpp.i

CMakeFiles/round729.dir/C.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/round729.dir/C.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\78136\CLionProjects\round729\C.cpp -o CMakeFiles\round729.dir\C.cpp.s

CMakeFiles/round729.dir/D.cpp.obj: CMakeFiles/round729.dir/flags.make
CMakeFiles/round729.dir/D.cpp.obj: ../D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\78136\CLionProjects\round729\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/round729.dir/D.cpp.obj"
	D:\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\round729.dir\D.cpp.obj -c C:\Users\78136\CLionProjects\round729\D.cpp

CMakeFiles/round729.dir/D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/round729.dir/D.cpp.i"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\78136\CLionProjects\round729\D.cpp > CMakeFiles\round729.dir\D.cpp.i

CMakeFiles/round729.dir/D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/round729.dir/D.cpp.s"
	D:\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\78136\CLionProjects\round729\D.cpp -o CMakeFiles\round729.dir\D.cpp.s

# Object files for target round729
round729_OBJECTS = \
"CMakeFiles/round729.dir/main.cpp.obj" \
"CMakeFiles/round729.dir/C.cpp.obj" \
"CMakeFiles/round729.dir/D.cpp.obj"

# External object files for target round729
round729_EXTERNAL_OBJECTS =

round729.exe: CMakeFiles/round729.dir/main.cpp.obj
round729.exe: CMakeFiles/round729.dir/C.cpp.obj
round729.exe: CMakeFiles/round729.dir/D.cpp.obj
round729.exe: CMakeFiles/round729.dir/build.make
round729.exe: CMakeFiles/round729.dir/linklibs.rsp
round729.exe: CMakeFiles/round729.dir/objects1.rsp
round729.exe: CMakeFiles/round729.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\78136\CLionProjects\round729\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable round729.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\round729.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/round729.dir/build: round729.exe

.PHONY : CMakeFiles/round729.dir/build

CMakeFiles/round729.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\round729.dir\cmake_clean.cmake
.PHONY : CMakeFiles/round729.dir/clean

CMakeFiles/round729.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\78136\CLionProjects\round729 C:\Users\78136\CLionProjects\round729 C:\Users\78136\CLionProjects\round729\cmake-build-debug C:\Users\78136\CLionProjects\round729\cmake-build-debug C:\Users\78136\CLionProjects\round729\cmake-build-debug\CMakeFiles\round729.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/round729.dir/depend
