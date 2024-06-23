#include <iostream>
using namespace std;
#include "manager.h"

int main()
{
    Manager man(301 , "Rakesh Ranjan", 20000, 12.0, 8.0);

    cout<<"Employee ID : "<<man.getId()<<endl;
    cout<<"Employee Name : "<<man.getName()<<endl; 
    cout<<"Basic Salary : "<<man.getBasic()<<endl;
    cout<<"HRA Percent : "<<man.getHRAPercent()<<endl;
    cout<<"DA Percent : "<<man.getDAPercent()<<endl;

    man.setHRAPercent(25.0);
    man.setDAPercent(12.5);

    cout<<"HRA Percent : "<<man.getHRAPercent()<<endl;
    cout<<"DA Percent : "<<man.getDAPercent()<<endl;

    cout<<"Salary : "<<man.calcSalary()<<endl;

    return 0;
}