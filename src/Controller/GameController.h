//
// Created by Konstantin Gredeskoul on 11/3/18.
//

#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

class GameController {
  virtual void startGame() = 0;
  virtual void stopGame() = 0;
  virtual bool isFinished() = 0;
  virtual void next() = 0;
};

#endif //GAME_CONTROLLER_H
