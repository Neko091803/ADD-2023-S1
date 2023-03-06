#include"Referee.h"

using namespace std;

Referee::Referee(){
}

Player* Referee::refGame(Player* player1, Player* player2){
    char p1move = player1->makeMove();
    char p2move = player2->makeMove();
    if (p1move == p2move){
        return nullptr;
    } else if ((p1move == 'R' && p2move) || (p1move == 'S' && p2move == 'P') || (p1move == 'P' && p2move == 'R')){
        return player1;
    } else {
        return player2;
    }
}