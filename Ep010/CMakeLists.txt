cmake_minimum_required(VERSION 3.19)

project(rooster)

# math library
add_subdirectory(src/math)

# stats library
add_subdirectory(src/stats)

# target executable 
add_executable(rooster src/main.cpp)
#target_include_directories(rooster PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/stats/include)
target_link_libraries(rooster PUBLIC libstats)

# Find Nuget (install the latest CLI here: https://www.nuget.org/downloads).
find_program(NUGET nuget)
if(NOT NUGET)
    message(FATAL "CMake could not find the nuget command line tool. Please install it!")
else()
    # Copy the Nuget config file from source location to the CMake build directory.
    #configure_file(packages.config.in packages.config COPYONLY)
    # Run Nuget using the .config file to install any missing dependencies to the build directory.
    execute_process(COMMAND 
        ${NUGET} restore ../packages.config -SolutionDirectory ${CMAKE_BINARY_DIR}
        WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
    )
endif()