//
// Created by Konstantin Gredeskoul on 5/16/17.
//
#include <Game.h>
#include "gtest/gtest.h"
#include <SimonController.h>
#include <PlayerAI.h>
#include <PlayerHuman.h>
#include <Board.h>

using namespace std;

class BoardTest : public ::testing::Test {
protected:
  void SetUp() override {
  };

  void TearDown() override {
  };

  int rows = 4, cols = 4;
  Board board = Board(rows, cols);
};

TEST_F(BoardTest, board_is_initialized_with_zeros) {
  EXPECT_EQ(board.get(0, 0), 0);
}

TEST_F(BoardTest, board_size_is_correct) {
  EXPECT_EQ(board.size(), rows * cols);
}

TEST_F(BoardTest, board_can_set_and_get_values) {
  board.set(1, 10);
  EXPECT_EQ(board.get(1), 10);
  board.reset();
  EXPECT_EQ(board.get(1), BOARD_CELL_EMPTY);
}
