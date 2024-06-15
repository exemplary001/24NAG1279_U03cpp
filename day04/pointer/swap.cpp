#include <iostream>
#include "swap.h"
using namespace std;

int main()
{
    int num1, num2;
    num1 =100;
    num2 = 300;


    cout<<"Before Swap: "<<num1<<", "<<num2<<endl;
    myswap(&num1, &num2);
    cout<<"After swap: "<<num1<<", "<<num2<<endl;
}

void myswap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}