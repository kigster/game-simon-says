//
// Created by Konstantin Gredeskoul on 10/29/18.
//

#include "Game.h"

Game::Game(Player *players, int boardSize) : players(players), boardSize(boardSize) {
}

Game::Game(Player *players) : players(players) {
    this->boardSize = DEFAULT_BOARD_SIZE;
}
