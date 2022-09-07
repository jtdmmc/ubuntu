cmake_minimum_required(VERSION 3.0)

project(demo_soldier VERSION 1.0.0)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -O2 -Wall")

message("CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}")
message("CMAKE_CXX_FLAGS: ${CMAKE_CXX_FLAGS}")
message("CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")
message("CMAKE_SOURCE_DIR: ${CMAKE_SOURCE_DIR}")

message("PROJECT_NAME: ${PROJECT_NAME}")
message("PROJECT_VERSION: ${PROJECT_VERSION}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")





if (PROJECT_BINARY_DIR STREQUAL PROJECT_SOURCE_DIR)
    message(MARNING "The binary directory of CMake cannot be the same as source directory.")
endif ()





include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(main_cmake main.cpp src/soldier.cpp src/gun.cpp)                                                                                                     