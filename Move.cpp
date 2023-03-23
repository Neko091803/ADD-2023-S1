#include "Move.h"

    Move::Move(){
        moveName = "";
    }
    string Move::getName(){
        return moveName;
    }
    void Move::setName(string Name){
         moveName = Name;
    }

