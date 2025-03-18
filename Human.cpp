#include "Human.h"
#include "Rock.h"
#include "Paper.h"
#include "Scissors.h"
#include "Monkey.h"
#include "Ninja.h"
#include "Pirate.h"
#include "Zombie.h"
#include "Robot.h"


Human::Human(){
    name = "Human";
}

Human::Human(std::string name){
    this->name = name;
}

Move* Human::makeMove(){
    std::string move;
    while(true){
        std::cout << "Enter Move: ";
        std::cin >> move;
        if (move == "Rock") return new Rock();
        if (move == "Paper") return new Paper();
        if (move == "Scissors") return new Scissors();
        if (move == "Robot") return new Robot();
        if (move == "Monkey") return new Monkey();
        if (move == "Pirate") return new Pirate();
        if (move == "Ninja") return new Ninja();
        if (move == "Zombie") return new Zombie();
        std::cout << "Invalid move!";
    }

}

std::string Human::getName() {
    return name;
}