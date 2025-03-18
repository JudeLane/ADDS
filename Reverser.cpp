#include "Reverser.h"
#include<cmath>
#include<string>
#include<iostream>

int Reverser::reverseDigit (int num){
    if (num < 0){ 
        return -1;
    }
    if(num<10){
        return num;
    }
    int length = log10(num);
    int units = num%10;
    return units*pow(10,length) + reverseDigit(num/10);
}

std::string Reverser::reverseString(std::string string){
    if(string.empty()){
        std::cout<<"ERROR"<<std::endl;
    }
    if(string.length()<=1){
        return string;
    }
    int length = string.length()-1;
    return std::string(1, string.back()) + reverseString(string.substr(0,length));

}