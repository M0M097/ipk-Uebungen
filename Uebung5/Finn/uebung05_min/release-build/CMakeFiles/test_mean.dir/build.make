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
CMAKE_SOURCE_DIR = /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/release-build

# Include any dependencies generated for this target.
include CMakeFiles/test_mean.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_mean.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_mean.dir/flags.make

CMakeFiles/test_mean.dir/test_mean.cpp.o: CMakeFiles/test_mean.dir/flags.make
CMakeFiles/test_mean.dir/test_mean.cpp.o: ../test_mean.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/release-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_mean.dir/test_mean.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_mean.dir/test_mean.cpp.o -c /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/test_mean.cpp

CMakeFiles/test_mean.dir/test_mean.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_mean.dir/test_mean.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/test_mean.cpp > CMakeFiles/test_mean.dir/test_mean.cpp.i

CMakeFiles/test_mean.dir/test_mean.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_mean.dir/test_mean.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/test_mean.cpp -o CMakeFiles/test_mean.dir/test_mean.cpp.s

# Object files for target test_mean
test_mean_OBJECTS = \
"CMakeFiles/test_mean.dir/test_mean.cpp.o"

# External object files for target test_mean
test_mean_EXTERNAL_OBJECTS =

test_mean: CMakeFiles/test_mean.dir/test_mean.cpp.o
test_mean: CMakeFiles/test_mean.dir/build.make
test_mean: libuebung05.a
test_mean: CMakeFiles/test_mean.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/release-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_mean"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_mean.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_mean.dir/build: test_mean

.PHONY : CMakeFiles/test_mean.dir/build

CMakeFiles/test_mean.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_mean.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_mean.dir/clean

CMakeFiles/test_mean.dir/depend:
	cd /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/release-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/release-build /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/release-build /home/moritz/Dokumente/Master/C++/Uebung5/Finn/uebung05_min/release-build/CMakeFiles/test_mean.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_mean.dir/depend

