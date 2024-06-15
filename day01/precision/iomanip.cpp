#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int iVal = 1099;
    int lVal = 20;

    cout<<setw(5)<<setfill('0')<<hex<<iVal<<setw(5)<<setfill('*')<<lVal<<endl;
}