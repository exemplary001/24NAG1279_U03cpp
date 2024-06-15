#include <iostream>
using namespace std;

int main()
{
    int i=1, num, max;

    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter max value: ";
    cin>>max;

    while(i<=max)
    {
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }
}