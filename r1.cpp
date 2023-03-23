#include "r1.h"

int r1::sum_of_squares(int n){
    if(n ==1){
        return 1;
    } 
    
    else {
        return n*n + sum_of_squares(n-1);
    }
}