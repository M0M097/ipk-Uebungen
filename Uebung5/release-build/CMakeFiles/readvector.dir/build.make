# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/moritz/Dokumente/Master/C++/Uebung5

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moritz/Dokumente/Master/C++/Uebung5/release-build

# Include any dependencies generated for this target.
include CMakeFiles/readvector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/readvector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/readvector.dir/flags.make

CMakeFiles/readvector.dir/readvector.cpp.o: CMakeFiles/readvector.dir/flags.make
CMakeFiles/readvector.dir/readvector.cpp.o: ../readvector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/moritz/Dokumente/Master/C++/Uebung5/release-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/readvector.dir/readvector.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/readvector.dir/readvector.cpp.o -c /home/moritz/Dokumente/Master/C++/Uebung5/readvector.cpp

CMakeFiles/readvector.dir/readvector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/readvector.dir/readvector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/moritz/Dokumente/Master/C++/Uebung5/readvector.cpp > CMakeFiles/readvector.dir/readvector.cpp.i

CMakeFiles/readvector.dir/readvector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/readvector.dir/readvector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/moritz/Dokumente/Master/C++/Uebung5/readvector.cpp -o CMakeFiles/readvector.dir/readvector.cpp.s

# Object files for target readvector
readvector_OBJECTS = \
"CMakeFiles/readvector.dir/readvector.cpp.o"

# External object files for target readvector
readvector_EXTERNAL_OBJECTS =

readvector: CMakeFiles/readvector.dir/readvector.cpp.o
readvector: CMakeFiles/readvector.dir/build.make
readvector: libio_statistics.a
readvector: CMakeFiles/readvector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/moritz/Dokumente/Master/C++/Uebung5/release-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable readvector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/readvector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/readvector.dir/build: readvector

.PHONY : CMakeFiles/readvector.dir/build

CMakeFiles/readvector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/readvector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/readvector.dir/clean

CMakeFiles/readvector.dir/depend:
	cd /home/moritz/Dokumente/Master/C++/Uebung5/release-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moritz/Dokumente/Master/C++/Uebung5 /home/moritz/Dokumente/Master/C++/Uebung5 /home/moritz/Dokumente/Master/C++/Uebung5/release-build /home/moritz/Dokumente/Master/C++/Uebung5/release-build /home/moritz/Dokumente/Master/C++/Uebung5/release-build/CMakeFiles/readvector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/readvector.dir/depend

