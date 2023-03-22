#include "Truckloads.h"


 int Truckloads::numTrucks(int numCrates, int loadSize){
    if(numCrates <= loadSize){
        return 1;
    }
    int a; 
    int b;
    a = numCrates /2;
    b = numCrates - a;
        return numTrucks(a, loadSize)+numTrucks(b,loadSize);
    
   

 }
   int Truckloads::Check(int numCrates, int loadSize){
    if (numCrates >= 2 && numCrates <= 10000 && loadSize >= 1 && loadSize <= numCrates - 1){
        return numTrucks(numCrates, loadSize);
    }
    return -1;
   }