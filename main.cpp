#include "Referee.h"

using namespace std;

int main(){
    Human* human_player = new Human();
    Computer* computer_player = new Computer();
    Referee* referee = new Referee();
    Player * winning_player;
    winning_player = referee ->refGame(human_player, computer_player);
    
}