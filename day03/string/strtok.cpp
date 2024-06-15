#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char source[] = "First string sentence";
    char *token = strtok(source," ");

    while(token != NULL)
    {
        cout<<"strtok(): "<<token<<endl;
        token = strtok(NULL, " ");
    }
}