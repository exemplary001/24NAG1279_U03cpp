#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    int sum = n1+n2;
    float avg =(n1+n2)/2.0;
    cout<<"Sum of "<<n1<<" and "<<n2<<" = "<<setw(8)<<sum<<endl;
    cout<<"Average of "<<n1<<" and "<<n2<<" = "<<setprecision(3)<<avg<<endl;

}