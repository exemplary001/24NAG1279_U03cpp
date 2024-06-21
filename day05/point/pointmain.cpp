#include "point.h"
#include <iostream>
using namespace std;

int main()
{
    Point p1;
    Point p2;

    p1.setX(10);
    p1.setY(20);
    p2.setX(20);
    p2.setY(50);

    p1.DisplayPoint();
    p1.MovePoint(5,15);
    p1.DisplayPoint();
    p1.RotatePoint(10);
    p1.DisplayPoint();

    p2.DisplayPoint();
    p2.MovePoint(5,15);
    p2.DisplayPoint();
    p2.RotatePoint(10);
    p2.DisplayPoint();
}

/*
void DisplayPoint (struct point_rec &pt);
void MovePoint (struct point_rec &,int xMove,int yMove);
void RotatePoint (struct point_rec &pt, int angle);

int main()
{
    struct point_rec pt1;

    pt1.x = 10;
    pt1.y = 20;

    DisplayPoint(pt1);
    MovePoint(pt1, 5, 15);
    DisplayPoint(pt1);
    RotatePoint(pt1, 10);
    DisplayPoint(pt1);

    return 0;
}

void DisplayPoint (struct point_rec& pt)
{
    cout<<"{"<<pt.x<<", "<<pt.y<<"}"<<endl;
}

void MovePoint(struct point_rec& pt, int xMove, int yMove )
{
    pt.x += xMove;
    pt.y += yMove;
}

void RotatePoint(struct point_rec& pt, int angle)
{
    pt.x = pt.x * 1.154 * angle;
    pt.y = pt.y * 0.154 * angle;
}
*/