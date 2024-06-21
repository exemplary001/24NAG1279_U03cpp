#include "rectangle.h"
#include <iostream>
using namespace std;

Rectangle::Rectangle() : topX(0), topY(0), width(0), height(0) {}

Rectangle::Rectangle(int tX, int tY, int w, int h) : topX(tX), topY(tY), width(w), height(h) {}

int Rectangle::getTopX(void) const
{
    return topX;
}

int Rectangle::getTopY(void) const
{
    return topY;
}

int Rectangle::getWidth(void) const
{
    return width;
}

int Rectangle::getHeight(void) const
{
    return height;
}

void Rectangle::setTopX(int val)
{
    topX = val;
}

void Rectangle::setTopY(int val)
{
    topY = val;
}

void Rectangle::setWidth(int val)
{
    width = val;
}

void Rectangle::setHeight(int val)
{
    height = val;
}

void Rectangle::move(int x, int y)
{
    topX += x;
    topY += y;
}

void Rectangle::reduce(int x, int y)
{
    width -= x;
    height -= y;
}

void Rectangle::expand(int x, int y)
{
    width += x;
    height += y;
}

void Rectangle::display(void)
{
    cout<<"{"<<topX<<", "<<topY<<", "<<width<<", "<<height<<"}"<<endl;
}