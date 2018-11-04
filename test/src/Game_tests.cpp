//
// Created by Konstantin Gredeskoul on 5/16/17.
//
#include <Game.h>
#include "gtest/gtest.h"
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

TEST(SimonSaysTest, HandlesZeroInput) {
  EXPECT_EQ(0, 0);
}
