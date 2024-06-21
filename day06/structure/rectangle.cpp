#include <iostream>
using namespace std;

class Rectangle
{
private: 
    int topX, topY, width, height;

public: 
    Rectangle(): topX(0), topY(0), width(1), height(1) {}

    Rectangle(int x, int y, int w, int h) : topX(x), topY(y), width(w), height(h) {}

    int getTopX(void)
    {
        return topX;
    }
    int getTopY(void)
    {
        return topY;
    }
    int getWidth(void)
    {
        return width;
    }
    int getHeight(void)
    {
        return height;
    }

    void setTopX(int x)
    {
        topX = x;
    }
    void setTopY(int y)
    {
        topY = y;
    }
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }

    void Move(int x, int y)
    {
        topX += x;
        topY += y;
    }

    void Reduce(int h, int w)
    {
        height -= h;
        width -= w;
    }

    void Inflate (int h, int w)
    {
        height += h;
        width += w;
    }

    void Display()
    {
        cout<<"Rectangle(topX: "<<topX<<", topy: "<<topY
            <<", width: "<<width<<", height: "<<height<<")"<<endl;
    }
};

int main()
{
    Rectangle rect;
    rect.Display();

    Rectangle rect1(10, 15, 30, 35);
    rect1.Display();
    rect1.Move(5, -5);
    rect1.Display();
    rect1.Reduce(5, 10);
    rect1.Display();
    rect1.Inflate(10, 20);
    rect1.Display();

    rect1.setTopX(0);
    rect1.setTopY(0);
    rect1.setWidth(40);
    rect1.setHeight(50);
    cout<<"topX: "<<rect1.getTopX()<<", TopY: "<<rect1.getTopY()
        <<", Width: "<<rect1.getWidth()<<", Height: "<<rect1.getHeight()<<endl;
    
    return 0;
}