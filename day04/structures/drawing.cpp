#include <iostream>
#include <string>
using namespace std;

typedef struct rectangle {
    float length;
    float breadth;
    string color;
} rec;

typedef struct circle {
    float radius;
    string color;
} cir;

typedef struct text {
    int size;
    string color;
} tex;

typedef struct arrow {
    float length;
    string direction;
    string color;
}arr;

typedef struct triangle {
    float base;
    float perpendicular;
    string color;
    string type;
} tri;

int main()
{
    rec rec1;
    rec1.length = 4.5;
    rec1.breadth = 5.5;
    rec1.color = "blue";

    cout<<"Rectangle {"<<"length: "<<rec1.length
        <<", breadth: "<<rec1.breadth
        <<", color: "<<rec1.color
        <<"}"<<endl;
    
    cir cir1;
    cir1.radius = 6;
    cir1.color = "black";

    cout<<"Circle {"<<"radius: "<<cir1.radius
        <<", color: "<<cir1.color
        <<"}"<<endl;
    
    tex tex1;
    tex1.size = 11;
    tex1.color = "white";

    cout<<"Text {"<<"size: "<<tex1.size
        <<", color: "<<tex1.color
        <<"}"<<endl;
    

    arr arr1;
    arr1.length = 10;
    arr1.direction = "left";
    arr1.color = "green";

    cout<<"Arrow {"<<"length: "<<arr1.length
        <<", direction: "<<arr1.direction
        <<", color: "<<arr1.color
        <<"}"<<endl;
    

    tri tri1;
    tri1.base = 4.5;
    tri1.perpendicular = 5.5;
    tri1.type = "equilateral";
    tri1.color = "orange";

    cout<<"Triangle {"<<"base: "<<tri1.base
        <<", perpendicular: "<<tri1.perpendicular
        <<", type: "<<tri1.type
        <<", color: "<<tri1.color
        <<"}"<<endl;
}