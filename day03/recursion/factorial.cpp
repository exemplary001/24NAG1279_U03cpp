#include <iostream>
#include "factorial.h"
using namespace std;

int main()
{
    int num = 6;
    int fact;
    fact =  factorial(num);
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;
    fact =  recfactorial(num);
    cout<<"Factorial of "<<num<<" is "<<fact<<endl;

    return 0;
}

int factorial(int n)
{
    int f=1,fact=1;
    for(f=n; f>1; f--)
        fact = fact * f;
    return fact;
}

int recfactorial(int n)
{
    if(n<=1)
        return 1;
    return n * recfactorial(n-1);
}