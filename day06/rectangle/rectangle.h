#pragma once


class Rectangle {
    int topX;
    int topY;
    int width;
    int height;
public:
    Rectangle();
    Rectangle(int tX, int tY, int w, int h);

    int getTopX(void) const;
    int getTopY(void) const;
    int getWidth(void) const;
    int getHeight(void) const;

    void setTopX(int val);
    void setTopY(int val);
    void setWidth(int val);
    void setHeight(int val);

    void move(int x, int y);
    void reduce(int x, int y);
    void expand(int x, int y);
    void display(void);
};