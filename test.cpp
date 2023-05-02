#include <iostream>
using namespace std;

int num = 300;
int* ptr;

int main() {
    ptr = &num;
    *ptr = 3000;

    cout << *ptr << endl; 
    return 0;
}