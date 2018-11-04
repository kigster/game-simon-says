//
// Created by Konstantin Gredeskoul on 10/31/18.
//

#ifndef PROJECT_PLAYER_H
#define PROJECT_PLAYER_H

#include <MacTypes.h>
#include <GameController.h>
#include "GameLogic.h"

class Player {
  GameController &controller;

public:
  explicit Player(GameController &controller);

protected:

};

#endif //PROJECT_PLAYER_H
