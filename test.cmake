cmake_minimum_required(VERSION 3.27)

include(FetchContent)

FetchContent_Declare(googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG v1.15.2
)

FetchContent_GetProperties(googletest)

FetchContent_MakeAvailable(googletest)
