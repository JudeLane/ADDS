#include "Robot.h"

std::string Robot::getName(){
    return "Robot";
}

bool Robot::beatsMove(Move* other){
    std::string otherMove = other->getName();
    if(otherMove == "Ninja"||otherMove == "Zombie"){
        return true;
    }
    return false;
}