#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

using namespace std;

class Player{
    public:
       Player();
       virtual string getMove()=0;
       virtual Move * makeMove()=0;


};

#endif