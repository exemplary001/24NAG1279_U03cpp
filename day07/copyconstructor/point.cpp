#include "point.h"
#include <iostream>
using namespace std;

Point::Point(int x, int y): x(x), y(y) 
{
    cout<<"Constructor of  Point: "<<x <<", "<<y<<endl;
}

Point::~Point()
{
    cout<<"Destructor of Point"<<endl;
}

void Point::Move(int x, int y)
{
    this->x += x;
    this->y += y;
}

void Point::Display(void) const
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