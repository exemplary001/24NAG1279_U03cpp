#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;

    int *arr;
    arr = (int*)malloc(size * sizeof(int));
    if (arr == nullptr)
    {
        cout<<"Memory allocation failed"<<endl;
        return 0;
    }
    
    cout<<"Enter the elements in the array: ";
    for(int i=0; i<size; i++)
        cin>>arr[i];
    
    int largest = arr[0];
    int smallest = arr[0];

    for(int i=0; i<size; ++i)
    {
        if (arr[i] > largest)
            largest = arr[i];
        
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    free(arr);

    cout<<"Largest number: "<<largest<<endl;
    cout<<"Smallest number: "<<smallest<<endl;

    return 0;
}