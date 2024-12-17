cmake_minimum_required(VERSION 3.19)

project(rooster)

# math library
include(src/math/math.cmake)

# stats library
include(src/stats/stats.cmake)

# target executable 
add_executable(rooster src/main.cpp)
#target_include_directories(rooster PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/stats/include)
target_link_libraries(rooster PUBLIC libstats)