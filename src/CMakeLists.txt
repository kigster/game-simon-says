cmake_minimum_required(VERSION 3.2)
project(‘game-lib')

file(GLOB MODEL_SOURCES
        "Model/*.h"
        "Model/*.cpp"
        )

file(GLOB CONTROLLER_SOURCES
        "Controller/*.h"
        "Controller/*.cpp"
        )

file(GLOB VIEW_SOURCES
        "View/*.h"
        "View/*.cpp"
        )

file(GLOB GAME_SOURCES
        "Game/*.h"
        "Game/*.cpp"
        )

file(GLOB GAME_LIB_HEADERS
        "*/*.h"
        )

set(GAME_SOURCE_FILES
        ${MODEL_SOURCES}
        ${CONTROLLER_SOURCES}
        ${VIEW_SOURCES}
        )

include_directories(Game Controller Model View)
add_library(game-lib SHARED STATIC ${GAME_SOURCE_FILES})
install(TARGETS game-lib DESTINATION ${TARGET_LIBRARY_INSTALL_LIB_DIR})
install(FILES ${GAME_LIB_HEADERS} DESTINATION ${TARGET_LIBRARY_INSTALL_INCLUDE_DIR})
