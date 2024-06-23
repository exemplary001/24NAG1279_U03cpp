#pragma once
#include "rectangle.h"

class RoundedRectangle : public Rectangle {
    int radius;

public:
    RoundedRectangle(int topX, int topY, int width, int height, int radius);
    int area(void) override;
    void colorRectangle (int color);
    using Rectangle::move;
    //void move(int num1, int num2);
    //void move(int num);
};