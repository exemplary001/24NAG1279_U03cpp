#include <iostream>
#include "fahrtocel.h"
using namespace std;


int main()
{
    const int size = 10;
    float fahrenheit[size] = {32.0f, 45.3f, 12.0f, 55.0f, -44.0f, 123.2f, 56.0f, 1.0f, 9.0f, 77.0f};
    float celsius[size];

    convertToCelsius(fahrenheit, celsius, size);
    displayArr(fahrenheit, celsius, size);
}

void convertToCelsius(float *fahr, float *cel, int num)
{
    for(int i=0; i<num; ++i)
        *(cel+i) = (*(fahr+i) - 32) * 5.0/9.0;
}


void displayArr(float *fahr, float *cel, int num)
{
    cout<<"Fahrenheit\tCelsius"<<endl;
    for(int i=0; i<num; ++i)
        cout<<*(fahr+i)<<"\t\t"<<*(cel+i)<<endl;
    cout<<endl;
}