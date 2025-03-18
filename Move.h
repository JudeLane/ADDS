#ifndef MOVE_H
#define MOVE_H
#include <string>

class Move{
    public:
        virtual std::string getName() = 0;
        virtual bool beatsMove(Move* otherMove) = 0;
        virtual ~Move();

};

#endif