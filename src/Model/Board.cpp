//
// Created by Konstantin Gredeskoul on 11/3/18.
//

#include <Board.h>
#include "Board.h"

Board::Board(int _rows, int _cols) {
  rows = _rows;
  cols = _cols;
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
void Board::set(int rows, int cols, int value) {
  matrix[(unsigned long) index(rows, cols)] = value;
}

void Board::set(int index, int value) {
  matrix[index] = value;
}

int Board::index(int r, int c) {
  auto i = rows * r + c;
  if (i > size()) {
    throw InvalidArgumentError();
  } else {
    return i;
  }
}

int Board::get(int rows, int cols) {
  return matrix[index(rows, cols)];
}

int Board::get(int index) {
  return matrix[index];
}



