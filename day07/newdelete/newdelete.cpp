#include <iostream>
using namespace std;

int main()
{
    int *iPtr;
    iPtr = new int[10];

    for (int i=0; i<10; i++)
        iPtr[i] = i*10;
    
    for (int i=0; i<10; i++)
        cout<<iPtr[i]<<", ";
    cout<<endl;

    delete [] iPtr;


/*
    *iPtr = 20;
    cout<<*iPtr<<endl;

    *iPtr = 40;
    cout<<*iPtr<<endl;

    delete iPtr;
    */
}