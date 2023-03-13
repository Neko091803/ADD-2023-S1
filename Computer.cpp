#include "Computer.h"

using namespace std;

Computer::Computer() { cname = "Computer"; }

Computer::Computer(string name) { cname = name; }

Move *Computer::makeMove()
{
  Move *move = new Move();
  move->setName("Rock");
  return move;
}

string Computer::getName() { return cname; }
