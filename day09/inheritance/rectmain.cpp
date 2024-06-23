#include "rectangle.h"
#include "roundedrect.h"
#include "parallelogram.h"
#include <iostream>
using namespace std;

int main()
{
    Rectangle rect(10, 20, 100, 150);
    RoundedRectangle roundRect(10, 20, 100, 150, 25);
    Parallelogram parRect(10, 20, 100, 150, 90);

    cout<<"Rectangle : "<<sizeof(Rectangle)<<endl;
    cout<<"Rounded Rectangle : "<<sizeof(RoundedRectangle)<<endl;
    cout<<"Parallelogram : "<<sizeof(Parallelogram)<<endl;
    cout<<endl;

    Rectangle *arrayRect[3];
    arrayRect[0] = &rect;
    arrayRect[1] = dynamic_cast<Rectangle *>(&roundRect);
    arrayRect[2] = dynamic_cast<Rectangle *>(&parRect);

    cout<<"Area : "<<rect.area()<<endl;
    cout<<"Area : "<<roundRect.area()<<endl;
    cout<<"Area : "<<parRect.area()<<endl;

    cout<<endl<<"Printing from Array : "<<endl;
    for (int i=0; i<3; i++)
    {
        cout<<"Area : "<<arrayRect[i]->area()<<endl;
    }
}