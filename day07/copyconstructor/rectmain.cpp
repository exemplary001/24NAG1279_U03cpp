#include "rectangle.h"
#include "point.h"
#include <iostream>
using namespace std;

// void DisplayPoint(const Point &point);
void DisplayRectangle (const Rectangle rect);
void DisplayPoint (const Point point);

int main()
{
    Point pt(100, 200);
    Rectangle rectOne;
    Rectangle rectTwo(10, 20, 50, 50);
    Rectangle::ShowCount();

    DisplayRectangle(rectOne);
    DisplayRectangle(rectTwo);
    DisplayPoint(pt);
    cout<<"Area of rectangle of 100x200 is "<<Rectangle::Area(100,200)<<endl;
}

/*
void DisplayPoint(const Point &point)
{
    point.Display(); 
}
*/

void DisplayRectangle(const Rectangle rectangle)
{
    rectangle.Display();
}

void DisplayPoint(const Point point)
{
    point.Display();
}