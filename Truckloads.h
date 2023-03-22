#ifndef TRUCKLOADS_H
#define TRUCKLOADS_H

#include<iostream>
#include<string>

using namespace std;

class Truckloads{
    public: 
 
   int Check(int numCrates, int loadSize);
    private:
      int numTrucks(int numCrates, int loadSize);
};


#endif