#include <iostream>
#include "operator.h"
using namespace std;

Point::Point(int x, int y) : x(x), y(y){}

Point::Point() : x(0), y(0) {}

Point Point::operator=(Point const &pt)
{
    if(this != &pt)
    {
        this->x = pt.x;
        this->y = pt.y;
    }
    return *this;
}

Point Point::operator+(Point const &pt) const
{
    return Point(this->x + pt.x, this->y + pt.y);
}

Point Point::operator+(const int num) const
{
    return Point(this->x + num, this->y + num);
    
}

Point Point::operator-(Point const &pt) const
{
    return Point(this->x - pt.x, this->y - pt.y);
}


Point Point::operator-(const int num) const
{
    
    return Point(this->x - num, this->y - num);
}

Point operator+(const int num, Point const &pt)
{
    return Point(num + pt.x, num + pt.y);
    
}

Point operator-(const int num, Point const &pt)
{
    return Point(num - pt.x, num - pt.y);
}

ostream &operator<<(ostream &out, Point const &pt)
{
    out << "(" << pt.x <<", " << pt.y <<")";
    return out;
}

Point Point::operator++()
    {
        ++x;
        ++y;
        return *this;

    }

Point Point::operator++(int)
{
    Point temp = *this;
    x++;
    y++;
    return temp;
}

Point Point::operator--()
    {
        --x;
        --y;
        return *this;

    }

Point Point::operator--(int)
{
    Point pt= *this;
    x--;
    y--;
    return pt;
}