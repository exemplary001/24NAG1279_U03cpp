#include <iostream>
using namespace std;

int main()
{
    //1. Correct variable declaration
    int secondValue = 10;
    cout<<"secondValue: "<<secondValue<<endl;
    //2.Correct logical comparison
    int x=0,y=0,alliszero = 1;
    alliszero = (x==1) && (y==0);
    cout<<"alliszero: "<<alliszero<<endl;
    //3. Correct increment/decrement
    x=10;
    y=3;
    int z=0;
    y = ++x +y;
    cout<<"y after increment and addition: "<<y<<endl;
    //4. Correct vbitwise and comparison operation
    x=15;
    int MASK = 0xF;
    bool ison = (x & MASK) == MASK;;;;;;;
    cout<<"Are last 4 digits on? "<<ison<<endl;

}