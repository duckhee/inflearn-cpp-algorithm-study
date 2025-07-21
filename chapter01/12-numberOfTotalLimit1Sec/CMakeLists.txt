cmake_minimum_required(VERSION 3.27)

project(NumberOfTotalLimit1Sec
        LANGUAGES CXX
        VERSION 0.0.1
        DESCRIPTION "숫자의 총 개수(small)")

add_executable(${PROJECT_NAME})
file(GLOB CPP_HEADER_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
file(GLOB CPP_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")


message(STATUS "Header Files - ${CPP_HEADER_SOURCE}")
message(STATUS "CPP Source Files - ${CPP_SOURCES}")

target_sources(${PROJECT_NAME} PRIVATE
        ${CPP_HEADER_SOURCE}
        ${CPP_SOURCES}
)

if (DEFINED G_TEST_FLAGS AND G_TEST_FLAGS)
    message(STATUS "${PROJECT_NAME}TestRunner")
    add_subdirectory(test)
endif (DEFINED G_TEST_FLAGS AND G_TEST_FLAGS)