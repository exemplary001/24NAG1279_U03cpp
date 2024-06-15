#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

void toUC(char *str)
{
    for (int i=0; str[i]; i++)
        str[i] = toupper((unsigned char)str[i]);
}

int main()
{
    char source[] = "UPPerCASe";
    toUC(source);

    cout<<"strupr(): "<<source<<endl;
}