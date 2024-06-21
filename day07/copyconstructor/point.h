#pragma once

class Point {
    int x, y;
public:
    Point (int x, int y);
    ~Point();

    int getX(void);
    int getY(void);

    void Move (int x, int y);
    void Display(void) const;
};