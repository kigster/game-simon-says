cmake_minimum_required(VERSION 3.2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O3")

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

set(TARGET_LIBRARY_INSTALL_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(TARGET_LIBRARY_INSTALL_BIN_DIR ${PROJECT_SOURCE_DIR}/bin)
set(TARGET_LIBRARY_INSTALL_LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

set(GAME_LIB_HEADERS ${PROJECT_SOURCE_DIR}/src)

set(GAME_LIB_INCLUDES
        ${GAME_LIB_HEADERS}/Model
        ${GAME_LIB_HEADERS}/Controller
        ${GAME_LIB_HEADERS}/View
        ${GAME_LIB_HEADERS}/Game
        ${GAME_LIB_HEADERS}/Game/SimonSays
)

include_directories(${TARGET_LIBRARY_INSTALL_INCLUDE_DIR})
include_directories(${GAME_LIB_INCLUDES})

add_subdirectory(src)
add_subdirectory(src/Game/SimonSays)


add_subdirectory(test)


