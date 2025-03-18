#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates<=loadSize){
        return 1;
    }

    return 1 + numTrucks(numCrates-loadSize, loadSize);
}