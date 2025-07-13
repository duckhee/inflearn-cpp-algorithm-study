cmake_minimum_required(VERSION 3.27)

project(AgeDifferenceStringControl
        LANGUAGES CXX
        VERSION 0.0.1
        DESCRIPTION "나이차이 문자열 컨트롤")

add_executable(${PROJECT_NAME})
file(GLOB_RECURSE CPP_HEADER_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
file(GLOB_RECURSE CPP_RECURSE_SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")

# 2. 제외할 경로 정의 (예: tests, external 등)
foreach (source ${CPP_RECURSE_SOURCES})
    if (NOT source MATCHES ".*/test/.*")
        list(APPEND CPP_SOURCES ${source})
    endif ()
endforeach ()


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