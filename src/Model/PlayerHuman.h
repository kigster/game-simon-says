//
// Created by Konstantin Gredeskoul on 11/3/18.
//

#ifndef PROJECT_PLAYERHUMAN_H
#define PROJECT_PLAYERHUMAN_H


#include "Player.h"

class PlayerHuman : Player {
  explicit PlayerHuman(GameController controller);
protected:
  GameController controller;
};


#endif //PROJECT_PLAYERHUMAN_H
