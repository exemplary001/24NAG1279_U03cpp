#include <iostream>
using namespace std;
#pragma pack(1)

struct point_rec {
    int x;
    int y;
    char z;
};

int main()
{
    struct point_rec pt;

    cout<<&pt.x<<", "<<(int *)&pt.z<<", "<<&pt.y<<endl;
    cout<<sizeof(struct point_rec)<<endl;
}