#ifndef HUMAN_H
#define HUMAN_H
#include<iostream>
#include "Player.h"

class Human {
   public:
   Human();
   Move* makeMove( );
   string getName();

   private:
   string hname;
};

#endif

