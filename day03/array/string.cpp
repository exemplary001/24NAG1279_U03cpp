#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char name[] = "Harry Potter";
    char newName[31];
    char newStr[] = "Hello";

    int len = strlen(name);
    cout<<"Length of the string is "<<len<<endl;

    strcpy(newName, name);
    cout<<"Copied string is "<<newName<<endl;

    strncpy(newName, newStr, 6);
    strcat(newName, name);
    cout<<"Copied string is "<<newName<<endl;
    cout<<"Copies string is "<<newName<<endl;



}