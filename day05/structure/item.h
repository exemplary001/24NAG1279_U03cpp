#include <string>
using namespace std;

typedef struct Item_Rec {
    int num;
    string name;
    float sellRate;
    int QOH;
    float buyRate;
    float discountRate;
    bool bIsRemoved;
} ITEM;