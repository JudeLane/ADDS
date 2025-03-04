#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <iostream>

int main() {
    std::string playerName;
    std::cout << "Enter your name: ";
    std::cin >> playerName;

    Human humanPlayer(playerName);
    Computer computerPlayer;
    Referee referee;

    Player* winner = referee.refGame(&humanPlayer, &computerPlayer);

    if (winner) {
        std::cout << winner->getName() << " Wins" << std::endl;
    } else {
        std::cout << "It's a Tie" << std::endl;
    }

    return 0;
}