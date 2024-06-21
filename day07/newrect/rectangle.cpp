#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle(Point &topLeft, Point &botRight) : topLeft(topLeft), bottomRight(botRight)
{}

Rectangle::Rectangle() : topLeft(0,0), bottomRight(0,0) 
{
    cout<<"Default Constructor of Rectangle" <<endl;
}

Rectangle::Rectangle(int leftX, int topY, int rightX, int botY) :
    topLeft(leftX, topY), bottomRight(rightX, botY) 
    {
        cout<<"Parameterized Constructor of Rectangle"<<endl;
    }

void Rectangle::Display(void)
{
    cout<<"{"<<topLeft.getX()<<", "<<topLeft.getY()<<", "
        <<bottomRight.getX()<<", "<<bottomRight.getY()<<"}"<<endl;
}