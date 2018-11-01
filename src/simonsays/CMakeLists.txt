cmake_minimum_required(VERSION 3.2)
project(simon-says-lib C CXX)

set(SOURCE_FILES
        SimonSays.cpp
        Game.cpp
        Move.cpp
        Player.cpp
        )

add_library(simon-says-lib SHARED STATIC ${SOURCE_FILES})

install(TARGETS simon-says-lib DESTINATION ${TARGET_LIBRARY_INSTALL_LIB_DIR})
install(FILES SimonSays.h DESTINATION ${TARGET_LIBRARY_INSTALL_INCLUDE_DIR})
