cmake_minimum_required(VERSION 3.2)
project(SimonSays-tests)

add_subdirectory(lib/googletest)

include_directories(${TARGET_BINARY_HEADERS_DIR})
include_directories(lib/googletest/googletest/include)

set(SOURCE_FILES main.cpp src/SimonSays_tests.cpp)

add_executable(SimonSays-tests ${SOURCE_FILES})
target_link_libraries(SimonSays-tests SimonSaysLibrary gtest)
install(TARGETS SimonSays-tests DESTINATION bin)

