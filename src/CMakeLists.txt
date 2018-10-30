cmake_minimum_required(VERSION 3.2)
project(SimonSays)

add_subdirectory(simonsays)
set(SOURCE_FILES main.cpp)

add_executable(SimonSays ${SOURCE_FILES})
target_link_libraries(SimonSays SimonSaysLibrary)
install(TARGETS SimonSays DESTINATION ${TARGET_LIBRARY_INSTALL_BIN_DIR})
