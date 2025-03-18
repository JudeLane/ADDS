#include "Ninja.h"

std::string Ninja::getName(){
    return "Ninja";
}

bool Ninja::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Pirate"||otherMove == "Zombie"){
        return true;
    }
    return false;
}