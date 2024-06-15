#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char source[] = "Thequick brown fox jumps over the lazy dog.";
    char *ptr = strstr(source,"fox");

    cout<<"strstr(): "<<ptr<<endl;
}