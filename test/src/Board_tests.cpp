//
// Created by Konstantin Gredeskoul on 5/16/17.
//
#include <gtest/gtest.h>

#include <Board.h>

using namespace std;

#define RANDOM_INT_VALUE 19879234

class BoardTest : public ::testing::Test {
protected:
  int rows = 4, cols = 5;
  Board board = Board(cols, rows);

  void SetUp() override {
    board.reset();
  };

  void TearDown() override {
  };
};

TEST_F(BoardTest, board_is_initialized_with_zeros) {
  EXPECT_EQ(board.get(1, 1), 0);
}


TEST_F(BoardTest, board_size_is_correct) {
  EXPECT_EQ(board.size(), rows * cols);
}

TEST_F(BoardTest, board_can_Rset_and_get_values) {
  board.set(1, 10);
  EXPECT_EQ(board.get(1), 10);
  board.reset();
  EXPECT_EQ(board.get(1), BOARD_CELL_EMPTY);
}

TEST_F(BoardTest, index__3_2_eq_7) {
  board.reset();
  board.set(3, 2, RANDOM_INT_VALUE);
  EXPECT_EQ(board.get(3, 2), RANDOM_INT_VALUE);
  EXPECT_EQ(board.get(7), RANDOM_INT_VALUE);
}

TEST_F(BoardTest, index__4_2_eq_8) {
  board.reset();
  EXPECT_EQ(board.index(4, 2), 8);
}

TEST_F(BoardTest, index__1_1_eq_0) {
  board.reset();
  EXPECT_EQ(board.index(1, 1), 0);
}

TEST_F(BoardTest, index__invalid_values) {
  ASSERT_THROW(board.index(0, 0), InvalidArgumentError);
}
