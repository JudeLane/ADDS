#include "Pirate.h"

std::string Pirate::getName(){
    return "Pirate";
}

bool Pirate::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Monkey"||otherMove == "Robot"){
        return true;
    }
    return false;
}