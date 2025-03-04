#include "Human.h"

Human::Human(){
    name = "Human";
}

Human::Human(string name){
    this->name = name;
}

char Human::makeMove(){
    char move;
   while (true) {
        std::cout << "Enter move: ";
        std::cin >> move;
    
        if (move == 'R' || move == 'S' || move == 'P') {
            return move;
        } else {
            std::cout << "That is not a valid answer" << std::endl;
        }
    }
}

string Human::getName() {
    return name;
}