//
// Created by Konstantin Gredeskoul on 5/16/17.
//
#include "gtest/gtest.h"

#include <Game.h>
#include <Board.h>
#include <SimonController.h>
#include <PlayerAI.h>
#include <PlayerHuman.h>

using namespace std;

class GameTest : public ::testing::Test {
public:
protected:

  void SetUp() override {

  };

  void TearDown() override {
  };

};

TEST(GameTest, games_can_also_handle_zeros)
{
  EXPECT_EQ(0, 0);
}

TEST(GameTest, shit_can_be_initialized) {
    Board board = Board(4, 4);
//  SimonSays::SimonController controller = SimonSays::SimonController(16);
//  Player first = PlayerHuman((const GameController) controller);
//  Player second = PlayerAI((const GameController) controller);
}
