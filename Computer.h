#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include<iostream>
class Computer{
  public:
  Computer();
  Move* makeMove( );
   string getName();
   private:
   string cname;
};

#endif