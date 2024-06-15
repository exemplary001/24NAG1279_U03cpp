#include <iostream>
using namespace std;

int main()
{
    cout<<"Input array size: ";
    int size;
    cin>>size;

    int *pArr;
    pArr = (int *)malloc(size * sizeof(int));

    if (pArr == nullptr)
        return 0;

    for (int i=0; i<size; i++)
        pArr[i] = 100 + 10*i;
    
    for (int i=0; i<size; i++)
        cout<<pArr[i]<<endl;
    
    free(pArr);
}