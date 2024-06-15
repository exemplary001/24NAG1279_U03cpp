#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void toLC(char *str)
{
    for (int i=0; str[i]; i++)
        str[i] = tolower((unsigned char)str[i]);
}

int main()
{
    char source[] = "LOWerCASe";
    toLC(source);

    cout<<"strlwr(): "<<source<<endl;
}