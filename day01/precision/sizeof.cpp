#include <iostream>
using namespace std;

int main()
{
    bool bVal;
    char cVal;
    short sVal;
    int iVal;
    long lVal;
    long long llVal;

    float fVal;
    double dVal;
    long double ldVal;

    cout<<"bool : "<<sizeof(bVal)<<endl;
    cout<<"char : "<<sizeof(cVal)<<endl;
    cout<<"short "<<sizeof(sVal)<<endl;
    cout<<"int : "<<sizeof(iVal)<<endl;
    cout<<"long : "<<sizeof(lVal)<<endl;
    cout<<"long long : "<<sizeof(llVal)<<endl;
    cout<<"float : "<<sizeof(fVal)<<endl;
    cout<<"double : "<<sizeof(dVal)<<endl;
    cout<<"long double : "<<sizeof(ldVal)<<endl;

    return 0;

}