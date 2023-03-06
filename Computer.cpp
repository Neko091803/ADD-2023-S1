#include "Computer.h"

using namespace std;

Computer::Computer(){
    Name="Computer";
}

char Computer::makeMove(){
    char move = 'R';
    return move;
}

string Computer::getName(){
    return Name;
}

