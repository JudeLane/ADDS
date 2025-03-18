#include "Scissors.h"

std::string Scissors::getName(){
    return "Scissors";
}

bool Scissors::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Paper"){
        return true;
    }
    return false;
}