cmake_minimum_required(VERSION 3.2)
project(simon-says-tests)

if (CMAKE_VERSION VERSION_LESS "3.1")
  add_definitions(-std=c++11)
else()
  set(CMAKE_CXX_STANDARD 11)
  set(CMAKE_CXX_STANDARD_REQUIRED ON)
  set(CMAKE_CXX_EXTENSIONS OFF)
endif()

if (POLICY CMP0048)
  cmake_policy(SET CMP0048 NEW)
endif (POLICY CMP0048)

project(googletest-distribution)
set(GOOGLETEST_VERSION 1.9.0)

enable_testing()
include(CMakeDependentOption)
include(GNUInstallDirs)

add_subdirectory(lib/googletest/googletest)

include_directories(${TARGET_BINARY_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/SimonSays_tests.cpp)

add_executable(simon-says-tests ${SOURCE_FILES})
target_link_libraries(simon-says-tests simon-says-lib gtest_main)
install(TARGETS simon-says-tests DESTINATION bin)

