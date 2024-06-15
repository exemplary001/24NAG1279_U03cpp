#include <iostream>
using namespace std;
 int main()
 {
    char c;

    cout<<"Enter a character: ";
    cin>>c;

    bool isLower = (c>='a' && c<='z') ? true : false;
    bool isUpper = (c>='A' && c<='Z') ? true : false;
    bool isDigit = (c>='0' && c<='9') ? true : false;
    bool isWhiteSpace = (c==' ' || c=='\t' || c=='\n') ? true : false;

    cout<<"Character: "<<c<<endl;
    cout<<"Is lower case letter? "<<(isLower?"Yes":"No")<<endl;
    cout<<"Is upper case letter? "<<(isUpper?"Yes":"No")<<endl;
    cout<<"Is digit? "<<(isDigit?"Yes":"No")<<endl;
    cout<<"Is white space? "<<(isWhiteSpace?"Yes":"No")<<endl;
 }