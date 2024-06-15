#include <iostream>
using namespace std;

int main()
{
    int arrVal[10]={1,2,3,4,5,6,7,8,9,10};

    for(int i=0; i<10; i++)
    {
        cout<<arrVal[i]<<", ";
        cout<<arrVal[i+20]<<", ";

    }
    cout<<endl;

    for(int i=0; i<10; i++)
    {
        arrVal[i] = 5;
        arrVal[i+20] = 50;

    }

    for(int i=0; i<10; i++)
    {
        cout<<arrVal[i]<<", ";
        cout<<arrVal[i+20]<<", ";

    }

    cout<<endl;

}