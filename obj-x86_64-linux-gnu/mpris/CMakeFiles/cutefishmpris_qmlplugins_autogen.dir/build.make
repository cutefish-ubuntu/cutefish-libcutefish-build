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

# Utility rule file for cutefishmpris_qmlplugins_autogen.

# Include the progress variables for this target.
include mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/progress.make

mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target cutefishmpris_qmlplugins"
	cd /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/mpris && /usr/bin/cmake -E cmake_autogen /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/AutogenInfo.json None

cutefishmpris_qmlplugins_autogen: mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen
cutefishmpris_qmlplugins_autogen: mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/build.make

.PHONY : cutefishmpris_qmlplugins_autogen

# Rule to build all files generated by this target.
mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/build: cutefishmpris_qmlplugins_autogen

.PHONY : mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/build

mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/clean:
	cd /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/mpris && $(CMAKE_COMMAND) -P CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/cmake_clean.cmake
.PHONY : mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/clean

mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/depend:
	cd /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/Downloads/cutefish/libcutefish /root/Downloads/cutefish/libcutefish/mpris /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/mpris /root/Downloads/cutefish/libcutefish/obj-x86_64-linux-gnu/mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mpris/CMakeFiles/cutefishmpris_qmlplugins_autogen.dir/depend

