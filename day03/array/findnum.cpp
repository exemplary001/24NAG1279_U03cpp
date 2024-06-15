#include <iostream>
#include "findnum.h"
using namespace std;

int main()
{
    int n;
    int arr[10] = {12, 14, 56, 73, 887, 25, 44, 1, 98, 50};
    
    searchLoop(arr);
}

int searchArray(int arr[], int n)
{
    for(int i=0; i<10; i++)
    {
        if (arr[i] == n)
            return i;
    }
    return -1;
}

void searchLoop(int arr[])
{
    int n;
    while (true)
    {
        cout<<"Enter a number to search (0 To Exit): ";
        cin>>n;

        if (n==0)
            break;
        
        int res = searchArray(arr, n);

        if(res != -1)
            cout<<n<<" is present in index "<<res+1<<endl;
        else
            cout<<n<<" is not present in the array."<<endl;       
    }
}