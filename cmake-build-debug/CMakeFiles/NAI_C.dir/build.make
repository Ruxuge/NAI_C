# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /app/extra/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /app/extra/clion/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ruxuge/CLionProjects/NAI_C

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ruxuge/CLionProjects/NAI_C/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/NAI_C.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/NAI_C.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NAI_C.dir/flags.make

CMakeFiles/NAI_C.dir/main.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/NAI_C.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/main.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/main.cpp

CMakeFiles/NAI_C.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/main.cpp > CMakeFiles/NAI_C.dir/main.cpp.i

CMakeFiles/NAI_C.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/main.cpp -o CMakeFiles/NAI_C.dir/main.cpp.s

CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.o: ../zadania/zad1/lab1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/zadania/zad1/lab1.cpp

CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/zadania/zad1/lab1.cpp > CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.i

CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/zadania/zad1/lab1.cpp -o CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.s

CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.o: ../zadania/zad2/lab2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/lab2.cpp

CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/lab2.cpp > CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.i

CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/lab2.cpp -o CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.s

CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.o: ../wykłady/wyk1/hill_climbing.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/wykłady/wyk1/hill_climbing.cpp

CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/wykłady/wyk1/hill_climbing.cpp > CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.i

CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/wykłady/wyk1/hill_climbing.cpp -o CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.s

CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.o: ../wykłady/wyk2/tabu_search.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/wykłady/wyk2/tabu_search.cpp

CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/wykłady/wyk2/tabu_search.cpp > CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.i

CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/wykłady/wyk2/tabu_search.cpp -o CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.s

CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.o: ../zadania/zad2/functions/Beale/beale.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/Beale/beale.cpp

CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/Beale/beale.cpp > CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.i

CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/Beale/beale.cpp -o CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.s

CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.o: ../zadania/zad2/functions/Booth/booth.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/Booth/booth.cpp

CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/Booth/booth.cpp > CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.i

CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/Booth/booth.cpp -o CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.s

CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.o: CMakeFiles/NAI_C.dir/flags.make
CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.o: ../zadania/zad2/functions/HimmelBlau/himmelBlau.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.o -c /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp

CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp > CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.i

CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ruxuge/CLionProjects/NAI_C/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp -o CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.s

# Object files for target NAI_C
NAI_C_OBJECTS = \
"CMakeFiles/NAI_C.dir/main.cpp.o" \
"CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.o" \
"CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.o" \
"CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.o" \
"CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.o" \
"CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.o" \
"CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.o" \
"CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.o"

# External object files for target NAI_C
NAI_C_EXTERNAL_OBJECTS =

NAI_C: CMakeFiles/NAI_C.dir/main.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/zadania/zad1/lab1.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/zadania/zad2/lab2.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/wykłady/wyk1/hill_climbing.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/wykłady/wyk2/tabu_search.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/zadania/zad2/functions/Beale/beale.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/zadania/zad2/functions/Booth/booth.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/zadania/zad2/functions/HimmelBlau/himmelBlau.cpp.o
NAI_C: CMakeFiles/NAI_C.dir/build.make
NAI_C: CMakeFiles/NAI_C.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking CXX executable NAI_C"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NAI_C.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NAI_C.dir/build: NAI_C
.PHONY : CMakeFiles/NAI_C.dir/build

CMakeFiles/NAI_C.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NAI_C.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NAI_C.dir/clean

CMakeFiles/NAI_C.dir/depend:
	cd /home/ruxuge/CLionProjects/NAI_C/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ruxuge/CLionProjects/NAI_C /home/ruxuge/CLionProjects/NAI_C /home/ruxuge/CLionProjects/NAI_C/cmake-build-debug /home/ruxuge/CLionProjects/NAI_C/cmake-build-debug /home/ruxuge/CLionProjects/NAI_C/cmake-build-debug/CMakeFiles/NAI_C.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NAI_C.dir/depend

