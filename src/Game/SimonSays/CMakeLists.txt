cmake_minimum_required(VERSION 3.2)
set(GAME_EXECUTABLE simon-says-game)
project(${GAME_EXECUTABLE})

include_directories(${GAME_LIB_HEADERS}/Game/SimonSays)

file(GLOB GAME_SOURCES
        "*.h"
        "*.cpp"
        )

file(GLOB GAME_HEADERS
        "*.h"
        )

install(FILES ${GAME_HEADERS} DESTINATION ${TARGET_LIBRARY_INSTALL_INCLUDE_DIR})
add_executable(${GAME_EXECUTABLE} ${GAME_SOURCES})
target_link_libraries(${GAME_EXECUTABLE} game-lib)
install(TARGETS ${GAME_EXECUTABLE} DESTINATION ${TARGET_LIBRARY_INSTALL_BIN_DIR})
