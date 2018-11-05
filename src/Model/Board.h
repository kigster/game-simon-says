/*
 * This class represents the Board of the Game
 * It contains the several Peg Rows objects
 * Also provides the operations to add Code and key pegs
 */
#ifndef BOARD_H_
#define BOARD_H_

#define BOARD_CELL_EMPTY 0
#define BOARD_CELL_FILLED 1

#include <vector>
#include <iostream>
#include <memory>
#include <exception>

using namespace std;

struct InvalidArgumentError: public std::exception {
   const char * what () const noexcept override {
      return "Invalid Argument provided";
   }
};

class Board {
protected:
  std::vector<int> matrix;

public:
  int rows, cols;

  Board(int rows, int cols);
  virtual ~Board() = default;

  unsigned long size();
  void reset();

  int index(int col, int row);

  void set(std::vector<int> indices, int value);

  void set(int cols, int rows, int value);
  int get(int col, int row);

  void set(int index, int value);
  int get(int index);

};

#endif /* BOARD_H_ */
