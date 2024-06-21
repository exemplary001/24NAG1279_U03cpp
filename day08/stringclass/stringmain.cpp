#include "MyString.h"
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    MyString str1("Hello World, America!!");
    MyString str2("Hello World, Afria!!");

    cout << str1[3]<< endl;
    str1[3] = 'x';
    cout<<str1<<endl;
}