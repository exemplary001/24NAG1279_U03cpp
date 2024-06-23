#include "roundedrect.h"
#include <iostream>
using namespace std;

RoundedRectangle::RoundedRectangle(int topX, int topY, int width, int height, int radius) :
                 Rectangle(topX, topY, width, height), radius(radius)
{}

int RoundedRectangle::area(void)
{
    int area = Rectangle::area() - (3.1415 * this->radius * this->radius);
    return area;
}

void RoundedRectangle::colorRectangle(int color)
{
    //
    //
    cout<<"Color of rectangle : "<<color<<endl;
}