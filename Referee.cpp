#include "Referee.h"
using namespace std;

Player* Referee::refGame(Player* human, Player* computer){
    char move1 = human->makeMove();
    char move2 = computer->makeMove();
    if (move1==move2){
        return nullptr;
    }
    if ((move1 == 'R' && move2 == 'S') ||
        (move1 == 'S' && move2 == 'P') ||
        (move1 == 'P' && move2 == 'R')) {
        return human;
    }
    return computer;
}