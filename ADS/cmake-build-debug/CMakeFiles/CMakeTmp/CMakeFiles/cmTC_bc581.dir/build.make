# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp"

# Include any dependencies generated for this target.
include CMakeFiles/cmTC_bc581.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmTC_bc581.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmTC_bc581.dir/flags.make

CMakeFiles/cmTC_bc581.dir/feature_tests.c.obj: CMakeFiles/cmTC_bc581.dir/flags.make
CMakeFiles/cmTC_bc581.dir/feature_tests.c.obj: C:/Users/Marvin/Documents/Eigene/FH/3_WiSe2018_19/Algorithms\ and\ Data\ Structurs/Praktikum/CLionProjects/ADS/cmake-build-debug/CMakeFiles/feature_tests.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir="C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/cmTC_bc581.dir/feature_tests.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\cmTC_bc581.dir\feature_tests.c.obj   -c "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\feature_tests.c"

CMakeFiles/cmTC_bc581.dir/feature_tests.c.i: cmake_force
	@echo Preprocessing C source to CMakeFiles/cmTC_bc581.dir/feature_tests.c.i
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\feature_tests.c" > CMakeFiles\cmTC_bc581.dir\feature_tests.c.i

CMakeFiles/cmTC_bc581.dir/feature_tests.c.s: cmake_force
	@echo Compiling C source to assembly CMakeFiles/cmTC_bc581.dir/feature_tests.c.s
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\feature_tests.c" -o CMakeFiles\cmTC_bc581.dir\feature_tests.c.s

# Object files for target cmTC_bc581
cmTC_bc581_OBJECTS = \
"CMakeFiles/cmTC_bc581.dir/feature_tests.c.obj"

# External object files for target cmTC_bc581
cmTC_bc581_EXTERNAL_OBJECTS =

cmTC_bc581.exe: CMakeFiles/cmTC_bc581.dir/feature_tests.c.obj
cmTC_bc581.exe: CMakeFiles/cmTC_bc581.dir/build.make
cmTC_bc581.exe: CMakeFiles/cmTC_bc581.dir/linklibs.rsp
cmTC_bc581.exe: CMakeFiles/cmTC_bc581.dir/objects1.rsp
cmTC_bc581.exe: CMakeFiles/cmTC_bc581.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --progress-dir="C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable cmTC_bc581.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\cmTC_bc581.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmTC_bc581.dir/build: cmTC_bc581.exe

.PHONY : CMakeFiles/cmTC_bc581.dir/build

CMakeFiles/cmTC_bc581.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\cmTC_bc581.dir\cmake_clean.cmake
.PHONY : CMakeFiles/cmTC_bc581.dir/clean

CMakeFiles/cmTC_bc581.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp" "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp" "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp" "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp" "C:\Users\Marvin\Documents\Eigene\FH\3_WiSe2018_19\Algorithms and Data Structurs\Praktikum\CLionProjects\ADS\cmake-build-debug\CMakeFiles\CMakeTmp\CMakeFiles\cmTC_bc581.dir\DependInfo.cmake"
.PHONY : CMakeFiles/cmTC_bc581.dir/depend

