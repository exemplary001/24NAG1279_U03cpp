#include <iostream>
using namespace std;

int main()
{
    int m1,m2,m3;
    float avg;
    cout<<"Enter marks in subject 1: "<<endl;
    cin>>m1;
    cout<<"Enter marks in subject 2: "<<endl;
    cin>>m2;
    cout<<"Enter marks in subject 3: "<<endl;
    cin>>m3;
    avg = (m1+m2+m3)/3.0;


        cout<<"Marks in subject 1: "<<m1<<endl;
        cout<<"Marks in subject 2: "<<m2<<endl;
        cout<<"Marks in subject 3: "<<m3<<endl;
        cout<<"Average Marks: "<<avg<<endl;

    if(m1<40 || m2<40 || m3<40)
        cout<<"Grade F"<<endl;
    else if (avg>75)
        cout<<"Grade A"<<endl;
    else if (avg>60)
        cout<<"Grade B"<<endl;
    else if (avg>40)
        cout<<"Grade C"<<endl;
    else if (avg>30)
        cout<<"Grade D"<<endl;
    else
        cout<<"Grade F"<<endl;
}