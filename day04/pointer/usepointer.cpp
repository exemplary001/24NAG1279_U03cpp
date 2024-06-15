#include <iostream>
using namespace std;

void displayArr(float *fPtr, int num);

int main()
{
    float arr[5] = { 10.0f, 20.0f, 30.0f, 40.0f, 50.0f};

    displayArr(arr, 5);
}

void displayArr(float *fPtr, int num)
{
    while(num != 0)
    {
        cout<<*fPtr<<", ";
        fPtr++;
        num--;
    }
    cout<<endl;
}