#include <iostream>
using namespace std;
 int main()
 {
    int val = 0xCAFE;

    int lastFourBits= val & 0xF;
    bool atLeastThreeOn = (__builtin_popcount(lastFourBits)>=3)? true : false;
    cout<<"At least three of the last four bits are on: "<<(atLeastThreeOn?"Yes":"No")<<endl;

    int reverseVal = ((val & 0xFF00)>>8) | ((val & 0x00FF)<<8);
    cout<<"Reversed byte order: 0x"<<hex<<reverseVal<<endl;

    int rotateVal = (val<<4) | ((val>>12)&0xF);
    cout<<"Rotated four bits: 0x"<<hex<<rotateVal<<endl;
 }