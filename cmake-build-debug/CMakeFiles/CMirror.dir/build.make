# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/wang/CLionProjects/CMirror

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/wang/CLionProjects/CMirror/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/CMirror.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CMirror.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CMirror.dir/flags.make

CMakeFiles/CMirror.dir/main.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CMirror.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/main.c.o   -c /Users/wang/CLionProjects/CMirror/main.c

CMakeFiles/CMirror.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/main.c > CMakeFiles/CMirror.dir/main.c.i

CMakeFiles/CMirror.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/main.c -o CMakeFiles/CMirror.dir/main.c.s

CMakeFiles/CMirror.dir/main.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/main.c.o.requires

CMakeFiles/CMirror.dir/main.c.o.provides: CMakeFiles/CMirror.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/main.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/main.c.o.provides

CMakeFiles/CMirror.dir/main.c.o.provides.build: CMakeFiles/CMirror.dir/main.c.o


CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o: ../imporve/socketClients/socketclient.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/socketClients/socketclient.c

CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/socketClients/socketclient.c > CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.i

CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/socketClients/socketclient.c -o CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.s

CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.requires

CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.provides: CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.provides

CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o


CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o: ../imporve/chooseSort/chooseSort.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/chooseSort/chooseSort.c

CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/chooseSort/chooseSort.c > CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.i

CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/chooseSort/chooseSort.c -o CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.s

CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.requires

CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.provides: CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.provides

CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o


CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o: ../imporve/testVariables/sizeof/sizeOf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testVariables/sizeof/sizeOf.c

CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testVariables/sizeof/sizeOf.c > CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.i

CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testVariables/sizeof/sizeOf.c -o CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.s

CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.requires

CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.provides: CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.provides

CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o


CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o: ../imporve/typedefTest/testTypedef.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/typedefTest/testTypedef.c

CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/typedefTest/testTypedef.c > CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.i

CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/typedefTest/testTypedef.c -o CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.s

CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.requires

CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.provides: CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.provides

CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o


CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o: ../imporve/testVariables/testVariable.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testVariables/testVariable.c

CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testVariables/testVariable.c > CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.i

CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testVariables/testVariable.c -o CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.s

CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.requires

CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.provides: CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.provides

CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o


CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o: ../imporve/testStatic/testStatic.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testStatic/testStatic.c

CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testStatic/testStatic.c > CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.i

CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testStatic/testStatic.c -o CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.s

CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.requires

CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.provides: CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.provides

CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o


CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o: ../imporve/testPointer/testPointer.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testPointer/testPointer.c

CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testPointer/testPointer.c > CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.i

CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testPointer/testPointer.c -o CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.s

CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.requires

CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.provides: CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.provides

CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o


CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o: ../imporve/testRadix/testRadix.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testRadix/testRadix.c

CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testRadix/testRadix.c > CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.i

CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testRadix/testRadix.c -o CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.s

CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.requires

CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.provides: CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.provides

CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o


CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o: ../imporve/testStruct/testStruct.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testStruct/testStruct.c

CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testStruct/testStruct.c > CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.i

CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testStruct/testStruct.c -o CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.s

CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.requires

CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.provides: CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.provides

CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o


CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o: ../imporve/testArray/testArray.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testArray/testArray.c

CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testArray/testArray.c > CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.i

CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testArray/testArray.c -o CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.s

CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.requires

CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.provides: CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.provides

CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o


CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o: ../imporve/testHelloWorld/testHelloWorld.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testHelloWorld/testHelloWorld.c

CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testHelloWorld/testHelloWorld.c > CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.i

CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testHelloWorld/testHelloWorld.c -o CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.s

CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.requires

CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.provides: CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.provides

CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o


CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o: ../imporve/testConstant/testConstant.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o   -c /Users/wang/CLionProjects/CMirror/imporve/testConstant/testConstant.c

CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/wang/CLionProjects/CMirror/imporve/testConstant/testConstant.c > CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.i

CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/wang/CLionProjects/CMirror/imporve/testConstant/testConstant.c -o CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.s

CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.requires:

.PHONY : CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.requires

CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.provides: CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.provides

CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.provides.build: CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o


CMakeFiles/CMirror.dir/mainCpp.cpp.o: CMakeFiles/CMirror.dir/flags.make
CMakeFiles/CMirror.dir/mainCpp.cpp.o: ../mainCpp.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/CMirror.dir/mainCpp.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CMirror.dir/mainCpp.cpp.o -c /Users/wang/CLionProjects/CMirror/mainCpp.cpp

CMakeFiles/CMirror.dir/mainCpp.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CMirror.dir/mainCpp.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/wang/CLionProjects/CMirror/mainCpp.cpp > CMakeFiles/CMirror.dir/mainCpp.cpp.i

CMakeFiles/CMirror.dir/mainCpp.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CMirror.dir/mainCpp.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/wang/CLionProjects/CMirror/mainCpp.cpp -o CMakeFiles/CMirror.dir/mainCpp.cpp.s

CMakeFiles/CMirror.dir/mainCpp.cpp.o.requires:

.PHONY : CMakeFiles/CMirror.dir/mainCpp.cpp.o.requires

CMakeFiles/CMirror.dir/mainCpp.cpp.o.provides: CMakeFiles/CMirror.dir/mainCpp.cpp.o.requires
	$(MAKE) -f CMakeFiles/CMirror.dir/build.make CMakeFiles/CMirror.dir/mainCpp.cpp.o.provides.build
.PHONY : CMakeFiles/CMirror.dir/mainCpp.cpp.o.provides

CMakeFiles/CMirror.dir/mainCpp.cpp.o.provides.build: CMakeFiles/CMirror.dir/mainCpp.cpp.o


# Object files for target CMirror
CMirror_OBJECTS = \
"CMakeFiles/CMirror.dir/main.c.o" \
"CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o" \
"CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o" \
"CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o" \
"CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o" \
"CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o" \
"CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o" \
"CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o" \
"CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o" \
"CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o" \
"CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o" \
"CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o" \
"CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o" \
"CMakeFiles/CMirror.dir/mainCpp.cpp.o"

# External object files for target CMirror
CMirror_EXTERNAL_OBJECTS =

CMirror: CMakeFiles/CMirror.dir/main.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o
CMirror: CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o
CMirror: CMakeFiles/CMirror.dir/mainCpp.cpp.o
CMirror: CMakeFiles/CMirror.dir/build.make
CMirror: CMakeFiles/CMirror.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX executable CMirror"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CMirror.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CMirror.dir/build: CMirror

.PHONY : CMakeFiles/CMirror.dir/build

CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/main.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/socketClients/socketclient.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/chooseSort/chooseSort.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testVariables/sizeof/sizeOf.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/typedefTest/testTypedef.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testVariables/testVariable.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testStatic/testStatic.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testPointer/testPointer.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testRadix/testRadix.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testStruct/testStruct.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testArray/testArray.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testHelloWorld/testHelloWorld.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/imporve/testConstant/testConstant.c.o.requires
CMakeFiles/CMirror.dir/requires: CMakeFiles/CMirror.dir/mainCpp.cpp.o.requires

.PHONY : CMakeFiles/CMirror.dir/requires

CMakeFiles/CMirror.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CMirror.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CMirror.dir/clean

CMakeFiles/CMirror.dir/depend:
	cd /Users/wang/CLionProjects/CMirror/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/wang/CLionProjects/CMirror /Users/wang/CLionProjects/CMirror /Users/wang/CLionProjects/CMirror/cmake-build-debug /Users/wang/CLionProjects/CMirror/cmake-build-debug /Users/wang/CLionProjects/CMirror/cmake-build-debug/CMakeFiles/CMirror.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/CMirror.dir/depend
