#include "Reverser.h"
#include <math.h>

int Reverser::reverseDigit(int num)
{
   //使用递归
    if (num < 10)
    {
         return num;
    }
    else
    {
         return (num % 10) * pow(10, (int)log10(num)) + reverseDigit(num / 10);
    }

}

string Reverser::reverseString(string str)
{
    //使用递归
    if (str.length() == 1)
    {
        return str;
    }
    else
    {
        return str.substr(str.length() - 1, 1) + reverseString(str.substr(0, str.length() - 1));
    }
}