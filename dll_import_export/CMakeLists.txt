cmake_minimum_required(VERSION 3.19)
project(MyProject)

add_library(MyLibrary SHARED mylib.cpp)

# Set the output directory for the DLL
set_target_properties(MyLibrary PROPERTIES LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Find the DLL
find_library(MyLibrary NAMES MyLibrary PATHS ${CMAKE_SOURCE_DIR}/build/bin)

# Add an executable
add_executable(myexe main.cpp)

# Link the executable to the DLL
target_link_libraries(myexe MyLibrary)