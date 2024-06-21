// struct point_rec {
//     int x,y;
// };

#include <iostream>
using namespace std;

class Point {
    int x,y;
public:
    int getX(void)
    {
        return x;
    }
    void setX(int xVal)
    {
        x = xVal;
    }
    int getY(void)
    {
        return y;
    }
    void setY(int yVal)
    {
        y = yVal;
    }

    void DisplayPoint(void)
    {
        cout<<"{"<<x<<", "<<y<<"}"<<endl;
    }

    void MovePoint (int xMove, int yMove)
    {
        x += xMove;
        y += yMove;
    }

    void RotatePoint (int angle)
    {
        x = x * 1.154 * angle;
        y = y * 0.154 * angle;
    }
};