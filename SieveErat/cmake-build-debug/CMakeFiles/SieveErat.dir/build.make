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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.4\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\armen\CLionProjects\SieveErat

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\armen\CLionProjects\SieveErat\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/SieveErat.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/SieveErat.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SieveErat.dir/flags.make

CMakeFiles/SieveErat.dir/main.cpp.obj: CMakeFiles/SieveErat.dir/flags.make
CMakeFiles/SieveErat.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\armen\CLionProjects\SieveErat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SieveErat.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\SieveErat.dir\main.cpp.obj -c C:\Users\armen\CLionProjects\SieveErat\main.cpp

CMakeFiles/SieveErat.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SieveErat.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\armen\CLionProjects\SieveErat\main.cpp > CMakeFiles\SieveErat.dir\main.cpp.i

CMakeFiles/SieveErat.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SieveErat.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\armen\CLionProjects\SieveErat\main.cpp -o CMakeFiles\SieveErat.dir\main.cpp.s

# Object files for target SieveErat
SieveErat_OBJECTS = \
"CMakeFiles/SieveErat.dir/main.cpp.obj"

# External object files for target SieveErat
SieveErat_EXTERNAL_OBJECTS =

SieveErat.exe: CMakeFiles/SieveErat.dir/main.cpp.obj
SieveErat.exe: CMakeFiles/SieveErat.dir/build.make
SieveErat.exe: CMakeFiles/SieveErat.dir/linklibs.rsp
SieveErat.exe: CMakeFiles/SieveErat.dir/objects1.rsp
SieveErat.exe: CMakeFiles/SieveErat.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\armen\CLionProjects\SieveErat\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SieveErat.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\SieveErat.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SieveErat.dir/build: SieveErat.exe

.PHONY : CMakeFiles/SieveErat.dir/build

CMakeFiles/SieveErat.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SieveErat.dir\cmake_clean.cmake
.PHONY : CMakeFiles/SieveErat.dir/clean

CMakeFiles/SieveErat.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\armen\CLionProjects\SieveErat C:\Users\armen\CLionProjects\SieveErat C:\Users\armen\CLionProjects\SieveErat\cmake-build-debug C:\Users\armen\CLionProjects\SieveErat\cmake-build-debug C:\Users\armen\CLionProjects\SieveErat\cmake-build-debug\CMakeFiles\SieveErat.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SieveErat.dir/depend

