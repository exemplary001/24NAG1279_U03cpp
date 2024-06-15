#include <iostream>
using namespace std;

int main()
{
    float f;
    cout<<"Input temperature in Fahrenheit: ";
    cin>>f;

    float c = 5.0/9.0*(f-32);

    cout<<"Temperature in Fahrenheit: "<<f<<endl;
    cout<<"Temperature in Celsius: "<<c<<endl;

}