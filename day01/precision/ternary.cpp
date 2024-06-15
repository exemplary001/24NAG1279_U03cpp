#include <iostream>
using namespace std;

int main()
{
    char ch='i';
    char upperch = (ch>='a' && ch<='z') ? ch-32 : ch;
    char lowerch = (ch>='A' && ch<='Z') ? ch+32 : ch;
    cout<<"ch: "<<ch<<" Upper: "<<upperch<<" Lower: "<<lowerch<<endl;
}