#include "Human.h"

using namespace std;

Human ::Human() { hname = "Human"; }

Human::Human(string name) { hname = name; }

Move *Human::makeMove()
{
  string tempName;
  Move *move = new Move();
  cin>>tempName;
  move->setName(tempName);
  return move;
}

string Human::getName() { return hname; }

// alg