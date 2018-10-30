cmake_minimum_required(VERSION 3.2)
project(SimonSaysLibrary C CXX)

set(SOURCE_FILES SimonSays.h SimonSays.cpp)

add_library(SimonSaysLibrary SHARED STATIC ${SOURCE_FILES})

install(TARGETS SimonSaysLibrary DESTINATION ${TARGET_LIBRARY_INSTALL_LIB_DIR})
install(FILES SimonSays.h DESTINATION ${TARGET_LIBRARY_INSTALL_INCLUDE_DIR})
