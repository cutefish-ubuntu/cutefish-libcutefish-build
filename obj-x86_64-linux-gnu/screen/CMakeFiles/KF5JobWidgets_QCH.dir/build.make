# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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


# Produce verbose output by default.
VERBOSE = 1

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
CMAKE_SOURCE_DIR = /root/Downloads/cutefish/libcutefish

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu

# Utility rule file for KF5JobWidgets_QCH.

# Include the progress variables for this target.
include screen/CMakeFiles/KF5JobWidgets_QCH.dir/progress.make

KF5JobWidgets_QCH: screen/CMakeFiles/KF5JobWidgets_QCH.dir/build.make

.PHONY : KF5JobWidgets_QCH

# Rule to build all files generated by this target.
screen/CMakeFiles/KF5JobWidgets_QCH.dir/build: KF5JobWidgets_QCH

.PHONY : screen/CMakeFiles/KF5JobWidgets_QCH.dir/build

screen/CMakeFiles/KF5JobWidgets_QCH.dir/clean:
	cd /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/screen && $(CMAKE_COMMAND) -P CMakeFiles/KF5JobWidgets_QCH.dir/cmake_clean.cmake
.PHONY : screen/CMakeFiles/KF5JobWidgets_QCH.dir/clean

screen/CMakeFiles/KF5JobWidgets_QCH.dir/depend:
	cd /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Downloads/cutefish/libcutefish /root/Downloads/cutefish/libcutefish/screen /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/screen /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/screen/CMakeFiles/KF5JobWidgets_QCH.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : screen/CMakeFiles/KF5JobWidgets_QCH.dir/depend

