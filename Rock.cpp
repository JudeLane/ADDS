#include "Rock.h"

std::string Rock::getName(){
    return "Rock";
}

bool Rock::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Scissors"){
        return true;
    }
    return false;
}