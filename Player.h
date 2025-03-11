#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include<string>



class Player{
    public:
        virtual std::string makeMove() = 0;
        virtual std::string getName() = 0;
        virtual ~Player() {};
};

#endif