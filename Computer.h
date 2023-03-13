#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer{
    public:
    Computer();
    Move* makeMove();
    string getName();
};

#endif