#include <iostream>
using namespace std;

int main()
{
    int iVal = 6;
    int *iPtr = &iVal;
    cout<<"iVal = "<<iVal<<endl;
    *iPtr = 10;
    cout<<"iVal = "<<iVal<<endl;
}