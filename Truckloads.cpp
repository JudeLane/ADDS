#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates<=loadSize){
        return 1;
    }

    int half = numCrates/2;
    int leftOver = numCrates - half;
    return numTrucks(numCrates, half) + numTrucks(numCrates, leftOver);
}