//
// Created by Konstantin Gredeskoul on 10/30/2018.
//

#ifndef SIMON_SAYS_H
#define SIMON_SAYS_H

#include <iostream>
#include <stdexcept>
#include <GameController.h>

using namespace std;

namespace SimonSays {
  class SimonController : GameController {
  public:
    SimonController();
    ~SimonController() = default;

  protected:
  };
}

#endif //SIMON_SAYS_H
