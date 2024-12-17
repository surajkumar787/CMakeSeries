cmake_minimum_required(VERSION 3.19)
project(HelloApp 
        VERSION 0.0.1 
        DESCRIPTION "CMake hellow world application" 
        LANGUAGES CXX)

#add_executable(HelloAppBinary main.cpp src/dog.cpp src/operation.cpp)
file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(HelloAppBinary main.cpp ${SOURCE_FILES})

target_compile_features(HelloAppBinary PRIVATE cxx_std_20)
target_include_directories(HelloAppBinary PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)