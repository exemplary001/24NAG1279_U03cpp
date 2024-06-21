#include "rectangle.h"
#include <iostream>
using namespace std;

int Rectangle::count;

Rectangle::Rectangle(Point &topLeft, Point &botRight) : topLeft(nullptr), bottomRight(nullptr)
{
    count++;
}

Rectangle::Rectangle() : topLeft(nullptr), bottomRight(nullptr) 
{
    cout<<"Default Constructor of Rectangle" <<endl;
    topLeft = new Point(0,0);
    bottomRight = new Point(0,0);
    count++;
}

Rectangle::Rectangle(int leftX, int topY, int rightX, int botY) :
    topLeft(nullptr), bottomRight(nullptr) 
    {
        cout<<"Parameterized Constructor of Rectangle"<<endl;
        this->topLeft = new Point(leftX, topY);
        this->bottomRight = new Point(rightX, botY);
        count++;
    }

Rectangle::Rectangle(const Rectangle &rhs)
{
    this->topLeft = new Point(rhs.getTop().getX(), rhs.getTop().getY());
    this->bottomRight = new  Point(rhs.getBottom().getX(), rhs.getBottom().getY());
    count++;
}

Rectangle::~Rectangle()
{
    delete topLeft;
    delete bottomRight;
    cout<<"Destructor of Rectangle"<<endl;
    count--;
}

void Rectangle::Display(void) const
{
    cout<<"{"<<topLeft->getX()<<", "<<topLeft->getY()<<", "
        <<bottomRight->getX()<<", "<<bottomRight->getY()<<"}"<<endl;
}

Point &Rectangle::getTop(void) const
{
    return *topLeft;
}

Point &Rectangle::getBottom(void) const
{
    return *bottomRight;
}

void Rectangle::ShowCount(void)
{
    cout<<"Count: "<<Rectangle::count<<endl;
}

int Rectangle::Area(int length, int breadth)
{
    return length * breadth;
}