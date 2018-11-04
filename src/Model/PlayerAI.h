//
// Created by Konstantin Gredeskoul on 11/3/18.
//

#ifndef PROJECT_PLAYERAI_H
#define PROJECT_PLAYERAI_H


#include "Player.h"

class PlayerAI : Player {
public:
  PlayerAI(GameController controller);
protected:
  GameController controller;
};


#endif //PROJECT_PLAYERAI_H
