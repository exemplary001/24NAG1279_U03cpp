#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n=1;

    /*
    for (int n=1;n<=100;n++)
    {
        if(n%3==0 || n%5==0)
            sum += n;
    }
    */
    while(n<=100)
    {
        if(n%3==0 || n%5==0)
            sum += n;
        n++;
    }
    cout<<"Sum = "<<sum<<endl;
}