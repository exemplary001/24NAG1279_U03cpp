#include "parallelogram.h"
#include <math.h>

Parallelogram::Parallelogram(int topX, int topY, int width, int height, int angle)
        : Rectangle(topX, topY, width, height), angle(angle) {}

int Parallelogram::area(void)
{
    int area = getHeight() * getWidth() * sin(angle);
    return area;
}