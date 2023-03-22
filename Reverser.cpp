#include "Reverser.h"
#include <math.h>
#include <iostream>

int Reverser::reverseDigit(int value)
{
    if(value / 10 == 0){
        return value;
    }
    //确认数字
   int num = value-((value/10)*10);
   //确认位置
   int power = 0;
while(value/ pow(10,power)>=1){
    power ++;
}
power--;

   //放在对应的位置
   int sum = num*pow(10,power);
   //下一个
   return sum + reverseDigit(value/10);

}

string Reverser::reverseString(string str){
    if (str.length() <= 1){
        return str;
    }
    char last = str.back();
    str.pop_back();
    return last + reverseString(str);

}
