#include <iostream>
int sumOf (int num1 = 0, int num2 = 0, int num3 = 0);
double sumOf (double num1, double num2, double num3);
double sumOf (double sum1, double num2);

int main()
{
    int sum = sumOf(10, 20, 30);
    std::cout<<"Sum = "<<sum <<std::endl;


    double sum1 = sumOf(101.23, 220.3, 30.49);
    std::cout<<"Sum = "<<sum1 <<std::endl;

    double sum2 = sumOf(101.23, 30.49);
    std::cout<<"Sum = "<<sum2 <<std::endl;

    int sum3 = sumOf(101);
    std::cout<<"Sum = "<<sum3 <<std::endl;
}

int sumOf(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

double sumOf(double num1, double num2, double num3)
{
    return num1 + num2 + num3;
}

double sumOf(double num1, double num2)
{
    return num1 + num2;
}