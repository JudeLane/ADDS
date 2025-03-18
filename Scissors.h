#ifndef SCISSORS_H
#define SCISSORS_H
#include "Move.h"

class Scissors:public Move{
    public:
        std::string getName();
        bool beatsMove(Move* other);

};

#endif