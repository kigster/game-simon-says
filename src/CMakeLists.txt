cmake_minimum_required(VERSION 3.2)
project(simon-says)

add_subdirectory(simonsays)
set(SOURCE_FILES main.cpp)

add_executable(simon-says ${SOURCE_FILES})
target_link_libraries(simon-says simon-says-lib)
install(TARGETS simon-says DESTINATION ${TARGET_LIBRARY_INSTALL_BIN_DIR})
