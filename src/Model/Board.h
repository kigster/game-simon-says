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
  std::vector<int> matrix;
  int index(int rows, int cols);
  int rows, cols;

public:
  Board(int rows, int cols);
  virtual ~Board() = default;

  unsigned long size();
  void reset();

  void set(std::vector<int> indices, int value);
  void set(int rows, int cols, int value);
  void set(int index, int value);

  int get(int rows, int cols);
  int get(int index);

};

#endif /* BOARD_H_ */
