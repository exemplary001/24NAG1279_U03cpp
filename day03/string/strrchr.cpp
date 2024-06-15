#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char source[] = "First string sentence";
    char *ptr = strrchr(source,'s');

    cout<<"strchr(): "<<ptr<<endl;
}