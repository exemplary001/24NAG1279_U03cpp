#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char source[] = "First string";
    char destination[20];

    strncpy(destination, source, 5);
    destination[5] = '\0';
    cout<<"strncpy(): "<<destination<<endl;
}