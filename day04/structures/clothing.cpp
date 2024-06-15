#include <iostream>
#include <string>
using namespace std;

struct Item_Rec {
    int code;
    string name;
    string size;
    float price;
};

int main()
{
    struct Item_Rec item;

    item.code = 382102;
    item.name = "Tshirt";
    item.size = "M";
    item.price = 599.99;

    cout<<"{ "<<"Item code: "<<item.code
            <<", name: "<<item.name
            <<", size: "<<item.size
            <<", price: "<<item.price<<" }"<<endl;
}