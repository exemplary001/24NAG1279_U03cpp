#pragma once
#include "point.h"

class Rectangle {
    Point topLeft;
    Point bottomRight;
public:
    Rectangle (Point &topLeft, Point &botRight);
    Rectangle();
    Rectangle(int leftX, int topY, int rightX, int botY);

    void Display(void);
};