#ifndef HUMAN_H
#define HUMAN_H

#include "Player.h"

using namespace std;

class Human : public Player {
 public:
 Human();
  Human(string name);
  Move* makeMove();
  string getName();
  private:
   string hname;
};

#endif