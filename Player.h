#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include "Move.h"

class Player{
  virtual Move* makeMove( ) = 0; 
  virtual string getName() = 0;

};


#endif