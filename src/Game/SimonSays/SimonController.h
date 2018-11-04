//
// Created by Konstantin Gredeskoul on 10/30/2018.
//

#ifndef SIMON_SAYS_H
#define SIMON_SAYS_H

#include <iostream>
#include <stdexcept>
#include <GameController.h>
#include <vector>

using namespace std;

namespace SimonSays {
  class SimonController : GameController {
    int steps;
    std::vector<int> original;
    std::vector<int> repeated;
  public:
    virtual ~SimonController() {}

  protected:
  };
}

#endif //SIMON_SAYS_H
