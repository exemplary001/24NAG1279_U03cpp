#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char str1[] = "Apple";
    char str2[] = "Appetizer";

    int res = strncmp(str1, str2, 4);
    cout<<"strncpy(): "<<res<<endl;
}