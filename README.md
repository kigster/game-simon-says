# "Simon Says..."

[![Build Status](https://travis-ci.org/kigster/SimonSays.svg?branch=master)](https://travis-ci.org/kigster/SimonSays) 

## A C/C++ Game for Repeating the Computer-Generated Patterns

### Usage

```c++
 
SimonSays simonSays = new SimonSays(16);

Player first        = PlayerHuman(simonSays);
Player second       = PlayerAI(simonSays);
Player *players     = { first, second } ;

Board board         = Board(4, 4);
Game game           = Game(simonSays, board);

game.begin(players);
while (game.inProgress()) {
  game.render(); // calls board.render()
  game.next();   // calls board.update(currentPlayer().move())
}
game.finish();
```

### Acklowledgements

This project is based on the

 * [CMake Project Template](https://github.com/kigster/cmake-project-template)

### License

&copy; 2017-2018 Konstantin Gredeskoul.

Open sourced under MIT license, the terms of which can be read here — [MIT License](http://opensource.org/licenses/MIT).
