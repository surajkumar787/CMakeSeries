cmake_minimum_required(VERSION 3.19)

set(CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 20)

project(HelloApp 
        VERSION 0.0.1 
        DESCRIPTION "CMake hellow world application" 
        LANGUAGES CXX)

#single executable target
add_library(operation STATIC src/operation.cpp)
target_include_directories(operation PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_compile_features(operation PUBLIC cxx_std_20)

add_library(logger STATIC logger/src/log.cpp)
target_include_directories(logger PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/logger/include)
#target_compile_features(operation PUBLIC cxx_std_20)

add_executable(HelloAppBinary main.cpp src/dog.cpp)


#GOLOBALING
#file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
#add_executable(HelloAppBinary main.cpp ${SOURCE_FILES})


target_include_directories(HelloAppBinary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
#target_compile_features(HelloAppBinary PUBLIC cxx_std_20)

target_link_libraries(HelloAppBinary operation logger)