#include "operator.h"

int main()
{
    Point p1(2,5);
    Point p2(4,9);
    Point p3 = p1 + p2;
    Point p4 = p2 - p1;
    Point p5 = p1 + 5;
    Point p6 = p1 - 4;
    Point p7 = 5 + p1;
    Point p8 = 5 - p1;

    cout<<"p1 : "<<p1<<endl;
    cout<<"p2 : "<<p2<<endl;
    cout<<"p1 + p2 : "<<p3<<endl;
    cout<<"p2 - p1 : "<<p4<<endl;
    cout<<"p1 + 5 : "<<p5<<endl;
    cout<<"p1 - 4 : "<<p6<<endl;
    cout<<"5 + p1 : "<<p7<<endl;
    cout<<"5 - p1 : "<<p8<<endl;
    cout<<"p1++ : "<<p1++<<endl;
    cout<<"++p1 : "<<++p1<<endl;
    cout<<"p1-- : "<<p1--<<endl;
    cout<<"--p1 : "<<--p1<<endl;
    
    return 0;

}