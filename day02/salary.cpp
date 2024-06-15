#include <iostream>
using namespace std;

int main()
{
    int grade;
    float basic, gross, hra, da;
    cout<<"Enter basic salary: ";
    cin>>basic;
    cout<<"Enter grade (1-4): ";
    cin>>grade;

    switch(grade)
    {
        case 1:
            hra = basic * 0.10;
            da = basic * 0.05;
            break;
        
        case 2:
            hra = basic * 0.12;
            da = basic * 0.08;
            break;
        
        case 3:
            hra = basic * 0.15;
            da = basic * 0.12;
            break;
        
        case 4:
            hra = basic * 0.18;
            da = basic * 0.15;
            break;
        
        default:
            cout<<"Invalid input. "<<endl;
            break;
    }

    gross = basic + hra + da;
    cout<<"Basic Salary = "<<basic<<endl;
    cout<<"Grade = "<<grade<<endl;
    cout<<"HRA = "<<hra<<endl;
    cout<<"DA = "<<da<<endl;
    cout<<"Gross Salary = "<<gross<<endl;
}