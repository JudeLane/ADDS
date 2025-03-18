#include "Monkey.h"

std::string Monkey::getName(){
    return "Monkey";
}

bool Monkey::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Ninja"||otherMove == "Robot"){
        return true;
    }
    return false;
}