#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char source[] = "Original String";
    char *duplicate = strdup(source);

    cout<<"strdup(): "<<duplicate<<endl;
}