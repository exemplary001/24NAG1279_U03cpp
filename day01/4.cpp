#include <iostream>
using namespace std;

int main()
{
    //1st expression
    int x=0xFF33;
    int MASK= 0xFF00;
    int c= (x & MASK) == 0;
    cout<<"c= "<<c<<" (after evasluating x & MASK == 0)"<<endl;
    //2nd expression
    x=10;
    int y=2,z=2;
    z=(y=(x++ + (++y * 2)));
    cout<<"x= "<<x<<", y= "<<y<<", z= "<<z<<" (after evaluating z=y=x++ + ++y*2)"<<endl;
    //3rd expression
    x=10;
    y=4;
    z=1;
    y>>=((x&0x2)&&z);
    cout<<"x= "<<x<<", y= "<<y<<", z= "<<z<<" (after evaluating y>>=x&0x2&&z)"<<endl;



}
