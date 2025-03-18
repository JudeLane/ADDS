#ifndef ROCK_H
#define ROCK_H
#include "Move.h"

class Rock:public Move{
    public:
        std::string getName();
        bool beatsMove(Move* other);

};

#endif