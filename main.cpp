//test all classes

#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include "Player.h"

using namespace std;

int main(){
    Human *human = new Human();
    Computer *computer = new Computer();
    Referee *referee = new Referee();

    Player *winner = referee->refGame(human, computer);
    return 0;
}