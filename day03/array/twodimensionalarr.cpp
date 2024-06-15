#include <iostream>
using namespace std;

int main()
{
    float marks[4][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}    };

    for (int i=0; i<4; i++)
    {
        cout<<"STUDENT #"<<i+1<<" {";
        for(int j=0; j<5; j++)
            cout<<marks[i][j]<<", ";
        cout<<"}"<<endl;
    }

    float sum = 0;

    for(int i=0; i<4; i++)
    {
        cout<<"Sum of marks for Student #"<<i+1<<"= ";
        for(int j=0; j<5; j++)
        {
            sum += marks[i][j];
        }
        cout<<sum<<endl;
    }

    float avg = 0;

    for(int j=0; j<5; j++)
    {
        float sum1 = 0;
        cout<<"Average marks of Subject #"<<j+1<<"= ";
        for (int i=0; i<4;i++)
        {
            sum1 += marks[i][j];
        }
        avg = sum1/4.0;
        cout<<avg<<endl;
    }
}