#ifndef REFEREE_H
#define REFEREE_H

#include"Computer.h"
#include"Human.h"
#include"Player.h"

using namespace std;

class Referee{
    public:
    Referee();
    Player *refGame(Player *player1, Player *player2);
    
};

#endif