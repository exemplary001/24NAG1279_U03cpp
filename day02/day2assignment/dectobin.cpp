#include <iostream>
using namespace std;

int main()
{
    int a[10], n, i;
    cout<<"Enter a decimal number to convert: ";
    cin>>n;
    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n/=2;
    }
    cout<<"Binary for "<<n<<" = ";
    for(i-=1; i>=0; i--)
        cout<<a[i];
    cout<<endl;
}