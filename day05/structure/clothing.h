#include <string>
using namespace std;

typedef struct Item_Rec {
    int ItemNumber;
    string ItemName;
    float SellRate;
    int QOH;
    float BuyRate;
    float DiscountRate;
    bool isItemRemoved;
} ITEM;

void displayMenu ();
void SellItem (ITEM *items, int num);
int GetItem (int ItemNo, ITEM *items, int num);
void displayItems(ITEM *items, int num);