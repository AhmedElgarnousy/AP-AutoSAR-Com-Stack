# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = "C:\Users\Ahmed Kamal\Downloads\cmake-3.27.0-windows-x86_64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Ahmed Kamal\Downloads\cmake-3.27.0-windows-x86_64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\build"

# Include any dependencies generated for this target.
include CMakeFiles/vector_test.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vector_test.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vector_test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector_test.dir/flags.make

CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj: CMakeFiles/vector_test.dir/flags.make
CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj: CMakeFiles/vector_test.dir/includes_CXX.rsp
CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj: D:/Auto_Mechatronics/GP\ Adaptive\ AutoSAR\ Stack/Repo/Adaptive-AutoSAR-Com-Stack/test/ara/core/vector/vector.cpp
CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj: CMakeFiles/vector_test.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj"
	C:\Users\AHMEDK~1\DOWNLO~1\X86_64~1.0-R\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj -MF CMakeFiles\vector_test.dir\test\ara\core\vector\vector.cpp.obj.d -o CMakeFiles\vector_test.dir\test\ara\core\vector\vector.cpp.obj -c "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\test\ara\core\vector\vector.cpp"

CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.i"
	C:\Users\AHMEDK~1\DOWNLO~1\X86_64~1.0-R\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\test\ara\core\vector\vector.cpp" > CMakeFiles\vector_test.dir\test\ara\core\vector\vector.cpp.i

CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.s"
	C:\Users\AHMEDK~1\DOWNLO~1\X86_64~1.0-R\mingw64\bin\C__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\test\ara\core\vector\vector.cpp" -o CMakeFiles\vector_test.dir\test\ara\core\vector\vector.cpp.s

# Object files for target vector_test
vector_test_OBJECTS = \
"CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj"

# External object files for target vector_test
vector_test_EXTERNAL_OBJECTS =

vector_test.exe: CMakeFiles/vector_test.dir/test/ara/core/vector/vector.cpp.obj
vector_test.exe: CMakeFiles/vector_test.dir/build.make
vector_test.exe: CMakeFiles/vector_test.dir/linkLibs.rsp
vector_test.exe: CMakeFiles/vector_test.dir/objects1.rsp
vector_test.exe: CMakeFiles/vector_test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\build\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector_test.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\vector_test.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector_test.dir/build: vector_test.exe
.PHONY : CMakeFiles/vector_test.dir/build

CMakeFiles/vector_test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\vector_test.dir\cmake_clean.cmake
.PHONY : CMakeFiles/vector_test.dir/clean

CMakeFiles/vector_test.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack" "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack" "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\build" "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\build" "D:\Auto_Mechatronics\GP Adaptive AutoSAR Stack\Repo\Adaptive-AutoSAR-Com-Stack\build\CMakeFiles\vector_test.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/vector_test.dir/depend

