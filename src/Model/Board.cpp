//
// Created by Konstantin Gredeskoul on 11/3/18.
//

#include "Board.h"

Board::Board(int _cols, int _rows) : rows(_rows), cols(_cols) {
  reset();
}

void Board::reset() {
  matrix.reserve(this->size());
  for (auto i = 0; i < size(); i++) {
    matrix[i] = BOARD_CELL_EMPTY;
  }
}

unsigned long Board::size() {
  return (unsigned long) rows * (unsigned long) cols;
}

void Board::set(std::vector<int> indices, int value) {
  for (auto & element : indices) {
    set(element, value);
  }
}

void Board::set(int col, int row, int value) {
  matrix[(unsigned long) index(col, row)] = value;
}

void Board::set(int index, int value) {
  matrix[index] = value;
}

// [ 0, 1, 2, 3, 4 ]
// [ 5, 6, 7, 8, 9 ]
// col = 4, row = 2
// (row - 1) * cols + (col - 1)

int Board::index(int col, int row) {
  int i = (row - 1) * cols + col - 1;
  if (i > size()) {
    throw InvalidArgumentError();
  } else {
    return i;
  }
}

int Board::get(int col, int row) {
  return matrix[index(col, row)];
}

int Board::get(int index) {
  return matrix[index];
}



