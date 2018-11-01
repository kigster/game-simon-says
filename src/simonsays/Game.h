//
// Created by Konstantin Gredeskoul on 10/29/18.
//

#ifndef PROJECT_GAME_H
#define PROJECT_GAME_H

#define DEFAULT_BOARD_SIZE 16
#define MAX_PLAYERS 4

#include "Player.h"

class Game {
protected:
    Player *players;
    int boardSize;

public:
    Game(Player *players, int boardSize);
    Game(Player *players);
};


#endif //PROJECT_GAME_H
