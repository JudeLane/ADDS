#ifndef HUMAN_H
#define HUMAN_H

#include<iostream>
#include<string>
#include "Player.h"


class Human: public Player{
    private:
        string name;
    public:
        Human();
        Human(string name);
        char makeMove() override;
        string getName() override;
};


#endif