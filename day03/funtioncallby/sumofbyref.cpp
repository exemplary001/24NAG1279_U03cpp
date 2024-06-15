#include <iostream>
#include "funccallbyref.h"
using namespace std;

int main()
{
    int num1, num2, num3, sum;
    float avg;

    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    sumof(num1, num2, num3, sum, avg);

    cout<<"Sum = "<<sum<<endl;
    cout<<"Average = "<<avg<<endl;
}

void sumof(int num1, int num2, int num3, int& sum, float& avg)
{
    sum = num1 + num2 + num3;
    avg = sum/3.0;
}