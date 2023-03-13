#ifndef COMPUTER_H
#define COMPUTER_H

#include "Player.h"

using namespace std;

class Computer : public Player {
 public:
 Computer();
  Computer(string name);
  string cname;
  Move* makeMove();
  string getName();
};

#endif
