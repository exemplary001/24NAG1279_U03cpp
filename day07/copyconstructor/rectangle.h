#pragma once
#include "point.h"

class Rectangle {
    Point *topLeft;
    Point *bottomRight;
public:
    static int count;
    Rectangle (Point &topLeft, Point &botRight);
    Rectangle();
    Rectangle(int leftX, int topY, int rightX, int botY);
    ~Rectangle();
    Rectangle(const Rectangle &rect);
    Point &getTop(void) const;
    Point &getBottom(void) const;

    void Display(void) const;
    static void ShowCount(void);
    static int Area(int length, int breadth);
};