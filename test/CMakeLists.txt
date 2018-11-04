cmake_minimum_required(VERSION 3.2)
project(simon-says-tests)
set(GOOGLETEST_VERSION 1.9.0)

if (CMAKE_VERSION VERSION_LESS "3.1")
    add_definitions(-std=c++11)
else ()
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
endif ()

enable_testing()
include(CMakeDependentOption)
include(GNUInstallDirs)

add_subdirectory(lib/googletest/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(${GAME_LIB_INCLUDES})
include_directories(${GAME_LIB_HEADERS}/Game/SimonSays)

file(GLOB TEST_SOURCES
        "src/*.h"
        "src/*_tests.cpp"
        )

set(TEST_SOURCE_FILES
        main.cpp
        ${TEST_SOURCES}
        )

add_executable(simon-says-tests ${TEST_SOURCE_FILES})
target_link_libraries(simon-says-tests game-lib gtest_main)
install(TARGETS simon-says-tests DESTINATION bin)

