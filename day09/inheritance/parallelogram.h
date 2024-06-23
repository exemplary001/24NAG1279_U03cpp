#pragma once
#include "rectangle.h"

class Parallelogram : public Rectangle{
    int angle;

public:
    Parallelogram(int topX, int topY, int width, int height, int angle);
    int area (void) override;
};