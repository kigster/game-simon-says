#include <SimonController.h>
#include <Player.h>
#include <PlayerAI.h>
#include <PlayerHuman.h>
#include <Board.h>

int main(int argc, const char *argv[]) {
  Board board = Board(4, 4);

  // SimonSays::Controller simonSays = new SimonSays::Controller(16);
  // Player first    = PlayerHuman(simonSays);
  // Player second   = PlayerAI(simonSays);
  // Player *players = { first, second } ;
  // Board board     = Board(4, 4);
  // Game game       = Game(board, simonSays);
  // game.begin(players);
  // while (game.inProgress()) {
  //   game.render();
  //   game.next();
  // }
  // game.finish();
  //
  return 0;
}
