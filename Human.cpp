#include "Human.h"

Human::Human(){
  hname = "Jason";
}

Move *Human::makeMove()
{
  Move *hmove = new Move();
  string HuMove;
  cout << "Enter your move" << endl;
  cin >> HuMove;
  hmove->setName(HuMove);
}
string Human::getName()
{
  return hname;
}