#include "Zombie.h"

std::string Zombie::getName(){
    return "Zombie";
}

bool Zombie::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Pirate"||otherMove == "Monkey"){
        return true;
    }
    return false;
}