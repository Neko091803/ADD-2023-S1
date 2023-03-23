#include "r2.h"

void r2::stars(int n){
    if (n==0){
        cout<<endl;
        
    }
    else{
        cout<<"*";
        stars(n-1);
    }
}