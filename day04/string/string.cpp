#include <iostream>
#include <string>
using namespace std;

int main()
{
    string strName = "Akash Ambani";
    string strCopy = strName;

    cout<<"Name: "<<strName<<endl;
    cout<<"Copy String: "<<strCopy<<endl;

    strCopy = "Hello " + strName;
    cout<<"Add string: "<<strCopy<<endl;

    if(strName > strCopy)
        cout<<strName<<" is > "<<strCopy<<endl;
    else
        cout<<strName<<" is < "<<strCopy<<endl;
    
    int pt = strName.find("ash");
    if (pt != string::npos)
        cout<<"String is found"<<endl;
    else    
        cout<<"String is not found"<<endl;
    
    strName.insert(6, "Anil ");
    cout<<"Insert in string: "<<strName<<endl;

}