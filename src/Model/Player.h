//
// Created by Konstantin Gredeskoul on 10/31/18.
//

#ifndef PROJECT_PLAYER_H
#define PROJECT_PLAYER_H

#include <GameController.h>
#include "GameLogic.h"

class Player {
public:
  Player(const GameController &controller);
public:
  GameController controller;
};

#endif //PROJECT_PLAYER_H
