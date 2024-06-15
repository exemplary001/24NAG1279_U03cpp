#include <iostream>
#include "funccallbyref.h"
using namespace std;

int main()
{
    int num1, num2;
    int &rnum1 = num2;


    num1 =5;
    num2 = 10;

    /*
    cout<<"Before copy- num1 = "<<num1<<", num2 = "<<num2<<endl;
    rnum1 = num1;
    cout<<"After copy- num1 = "<<num1<<", num2 = "<<num2<<endl;
    */
   
    cout<<"Before swap- num1 = "<<num1<<", num2 = "<<num2<<endl;
    myswap(num1, num2);
    cout<<"Before swap- num1 = "<<num1<<", num2 = "<<num2<<endl;

}

void myswap(int& num1, int& num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

