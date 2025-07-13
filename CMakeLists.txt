cmake_minimum_required(VERSION 3.31)
project(algorithm_study)

set(CMAKE_CXX_STANDARD 20)

option(G_TEST_FLAGS "Unit Test ON" OFF)

if (DEFINED G_TEST_FLAGS AND G_TEST_FLAGS)
    message(STATUS "Google Unit Tests Enabled")
    enable_testing()
endif (DEFINED G_TEST_FLAGS AND G_TEST_FLAGS)

add_subdirectory(chapter01)