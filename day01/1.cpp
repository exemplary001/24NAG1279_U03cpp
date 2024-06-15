#include <iostream>
#include <limits>
#include <float.h>
using namespace std;

int main()
{
    cout<<"Size of char: "<<sizeof(char)<<" bytes"<<endl;
    cout<<"Minimum value of char: "<<numeric_limits<char>::min()<<endl;
    cout<<"Maximum value of char: "<<numeric_limits<char>::max()<<endl;
    cout<<"Size of unsigned char: "<<sizeof(unsigned char)<<" bytes"<<endl;
    cout<<"Minimum value of unsigned char: "<<0<<endl;
    cout<<"Maximum value of unsigned char: "<<numeric_limits<unsigned char>::max()<<endl;
    cout<<"Size of short: "<<sizeof(short)<<" bytes"<<endl;
    cout<<"Minimum value of short: "<<numeric_limits<short>::min()<<endl;
    cout<<"Maximum value of short: "<<numeric_limits<short>::max()<<endl;
    cout<<"Size of int: "<<sizeof(int)<<" bytes"<<endl;
    cout<<"Minimum value of int: "<<numeric_limits<int>::min()<<endl;
    cout<<"Maximum value of int: "<<numeric_limits<int>::max()<<endl;
    cout<<"Size of unsigned int: "<<sizeof(unsigned int)<<" bytes"<<endl;
    cout<<"Minimum value of unsigned int: "<<0<<endl;
    cout<<"Maximum value of unsigned int: "<<numeric_limits<unsigned int>::max()<<endl;
    cout<<"Size of unsigned long: "<<sizeof(unsigned long)<<" bytes"<<endl;
    cout<<"Minimum value of unsigned long: "<<0<<endl;
    cout<<"Maximum value of unisgned long: "<<numeric_limits<unsigned long>::max()<<endl;
    cout<<"Size of float: "<<sizeof(float)<<" bytes"<<endl;
    cout<<"Minimum value of float: "<<numeric_limits<float>::min()<<endl;
    cout<<"Maximum value of float: "<<numeric_limits<float>::max()<<endl;

}