#include "Human.h"

using namespace std;

Human::Human(){
    Name="Human";
}

char Human::makeMove(){
    char move;
    cin >> move;
    return move;
}

string Human::getName(){
    return Name;
}

