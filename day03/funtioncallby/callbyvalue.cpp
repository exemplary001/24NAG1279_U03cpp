#include <iostream>
#include "funccallbyvalue.h"
using namespace std;



int main()
{
    int val=9;
    bool bOdd = isOdd(val);
    cout<<boolalpha<<bOdd<<endl;

}

bool isOdd(int num)
{
    if(num % 2 == 0)
        return false;
    return true;
}