cmake_minimum_required(VERSION 3.27)

include(${CMAKE_SOURCE_DIR}/test.cmake)

project(NumberExtractionTestRunner LANGUAGES CXX VERSION 0.0.1)

add_executable(${PROJECT_NAME} test.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/..
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        gtest_main
        gmock_main
)

add_test(NAME ${PROJECT_NAME} COMMAND $<TARGET_FILE:${PROJECT_NAME}>)