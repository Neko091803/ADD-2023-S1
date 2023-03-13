#include "Player.h"
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

using namespace std;

Referee::Referee()
{
}

Player *Referee::refGame(Player *player1, Player *player2)
{
    Move *player1Move = player1->makeMove();
    Move *player2Move = player2->makeMove();
    if (player1Move->moveName == player2Move->moveName)
    {
        return nullptr;
    }
    else if ((player1Move->moveName == "Rock" && player2Move->moveName == "Scissors") ||
             (player1Move->moveName == "Scissors" && player2Move->moveName == "Paper") ||
             (player1Move->moveName == "Paper" && player2Move->moveName == "Rock"))
    {
        return player1;
    }
    else if ((player2Move->moveName == "Rock" && player1Move->moveName == "Scissors") ||
             (player2Move->moveName == "Scissors" && player1Move->moveName == "Paper") ||
             (player2Move->moveName == "Paper" && player1Move->moveName == "Rock"))
    {
        return player2;
    }
    // The monkey gestureMonkey
    // Monkey fools Ninja
    // Monkey unplugs Robot

    // The gesture for robotRobot
    // Robot chokes Ninja
    // Robot crushes Zombie

    // The gesture for piratePirate
    // Pirate drowns Robot
    // Pirate skewers Monkey

    // The gesture for ninjaNinja
    // Ninja karate chops Pirate
    // Ninja decapitates Zombie

    // the gesture for zombieZombie
    // Zombie eats Pirate
    // Zombie savages Monkey

    else if ((player1Move->moveName == "Monkey" && player2Move->moveName == "Ninja") ||
             (player1Move->moveName == "Monkey" && player2Move->moveName == "Robot") ||
             (player1Move->moveName == "Robot" && player2Move->moveName == "Ninja") ||
             (player1Move->moveName == "Robot" && player2Move->moveName == "Zombie") ||
             (player1Move->moveName == "Pirate" && player2Move->moveName == "Robot") ||
             (player1Move->moveName == "Pirate" && player2Move->moveName == "Monkey") ||
             (player1Move->moveName == "Ninja" && player2Move->moveName == "Pirate") ||
             (player1Move->moveName == "Ninja" && player2Move->moveName == "Zombie") ||
             (player1Move->moveName == "Zombie" && player2Move->moveName == "Pirate") ||
             (player1Move->moveName == "Zombie" && player2Move->moveName == "Monkey"))
    {
        return player1;
    }
    else if ((player2Move->moveName == "Monkey" && player1Move->moveName == "Ninja") ||
             (player2Move->moveName == "Monkey" && player1Move->moveName == "Robot") ||
             (player2Move->moveName == "Robot" && player1Move->moveName == "Ninja") ||
             (player2Move->moveName == "Robot" && player1Move->moveName == "Zombie") ||
             (player2Move->moveName == "Pirate" && player1Move->moveName == "Robot") ||
             (player2Move->moveName == "Pirate" && player1Move->moveName == "Monkey") ||
             (player2Move->moveName == "Ninja" && player1Move->moveName == "Pirate") ||
             (player2Move->moveName == "Ninja" && player1Move->moveName == "Zombie") ||
             (player2Move->moveName == "Zombie" && player1Move->moveName == "Pirate") ||
             (player2Move->moveName == "Zombie" && player1Move->moveName == "Monkey"))
    {
        return player2;
    }
    else
    {
        return nullptr;
    }
    return nullptr;
}