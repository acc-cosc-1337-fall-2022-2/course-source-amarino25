//add include statements
#include<iostream>
#include "dna.h"

using std::cout;
using std::cin;

//add function(s) code here
int factorial(int num)
{
    int factorial = num;
    num--;
    while(num>0)
    {
        factorial *= num;
        num--;
    
    }
    return factorial;
}

int gcd(int num1, int num2)
{
    while (num1 != num2)
    {
        if(num1 < num2) 
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        
        if (num1 > num2) 
        {
            num1 -= num2;
        }
    }
        
    return num1;
}
