#include <iostream>
#include "sum.h"
using namespace std;

int main()
{
    int sum = sumof(10, 20, 30);
    cout<<"Sum is: "<<sum<<endl;
}

int sumof(int n1, int n2, int n3)
{
    return n1+n2+n3;
}