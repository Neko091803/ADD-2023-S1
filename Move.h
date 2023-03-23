#ifndef MOVE_H
#define MOVE_H
#include<iostream>

using namespace std;

class Move{
    public:
    Move();
    string getName();
    void setName(string Name);
    
    protected:
    string moveName;
   

};

#endif