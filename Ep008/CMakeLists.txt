cmake_minimum_required(VERSION 3.19)

project(rooster)

add_library(libmath STATIC src/math/supermath.cpp)
target_include_directories(libmath INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/src/math/include)

add_library(libstats STATIC src/stats/stats.cpp)
target_include_directories(libstats PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/stats/include)
target_link_libraries(libstats PRIVATE libmath)

# target executable 
add_executable(rooster src/main.cpp)
#target_include_directories(rooster PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/stats/include)
target_link_libraries(rooster PUBLIC libstats)