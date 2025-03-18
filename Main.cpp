#include "Referee.h"
#include "Human.h"
#include "Computer.h"
#include <iostream>

int main() {
    Referee referee;
    Human player1("Mei");
    Computer player2;

    Player* winner = referee.refGame(&player1, &player2);

    if (winner)
        std::cout << winner->getName() << " Wins.\n";
    else
        std::cout << "It's a Tie.\n";

    return 0;
}