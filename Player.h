#ifndef PLAYER_H
#define PLAYER_H

#include "Move.h"
#include <iostream>
#include <string>

using namespace std;
// abstract class
class Player{
 public:
  virtual Move* makeMove() = 0;
  virtual string getName() = 0;
};

#endif