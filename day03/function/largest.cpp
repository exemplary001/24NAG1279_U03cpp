#include <iostream>
#include "largest.h"
using namespace std;

int main()
{
    int num1, num2 ,num3;
    cout<<"Enter 3 numbers: ";
    cin>>num1>>num2>>num3;

    cout<<"Largest of the 3 numbers is "<<compare(num1, num2, num3)<<endl;
}

int compare(int num1,int num2,int num3)
{
    if(num1>=num2 && num1>=num3)
        return num1;
    else if(num2>=num1 && num2>=num3)
        return num2;
    else
        return num3;
}

