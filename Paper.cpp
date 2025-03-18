#include "Paper.h"

std::string Paper::getName(){
    return "Paper";
}

bool Paper::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Scissors"){
        return true;
    }
    return false;
}