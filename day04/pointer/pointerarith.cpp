#include <iostream>
using namespace std;

int main()
{
    char *cPtr;
    short *sPtr;
    int *iPtr;
    long *lPtr;

    char cVal = 10;
    short sVal = 100;
    int iVal = 1000;
    long lVal = 10000;

    cPtr = &cVal;
    sPtr = &sVal;
    iPtr = &iVal;
    lPtr = &lVal;

    cout<<"POinter Values"<<endl;
    cout<<"cPtr: "<<cPtr<<endl;
    cout<<"sPtr: "<<sPtr<<endl;
    cout<<"iPtr: "<<iPtr<<endl;
    cout<<"lPtr: "<<lPtr<<endl;

    cPtr++;
    sPtr++;
    iPtr++;
    lPtr++;

    cout<<"POinter Values"<<endl;
    cout<<"cPtr: "<<cPtr<<endl;
    cout<<"sPtr: "<<sPtr<<endl;
    cout<<"iPtr: "<<iPtr<<endl;
    cout<<"lPtr: "<<lPtr<<endl;
}