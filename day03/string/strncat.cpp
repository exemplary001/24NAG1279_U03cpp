#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[] = "First ";
    char str2[] = "String";

    strncat(str1, str2, 3);
    cout<<"strncat(): "<<str1<<endl;
}