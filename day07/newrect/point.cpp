#include "point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y): x(x), y(y) 
{
    cout<<"Constructor of  Point: "<<x <<", "<<y<<endl;
}

void Point::Move(int x, int y)
{
    this->x += x;
    this->y += y;
}

void Point::Display(void)
{
    cout<<"{"<<this->x<<", "<<this->y<<"}"<<endl;
}

int Point::getX(void)
{
    return this->x;
}

int Point::getY(void)
{
    return this->y;
}