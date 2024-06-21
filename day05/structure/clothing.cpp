#include <iostream>
#include "clothing.h"

int main()
{
    ITEM items[5] = {
        {1001, "TShirt", 599.99, 240, 449.99, 10.0, false},
        {1002, "Shorts", 499.99, 40, 349.99, 5.0, false},
        {1003, "Jeans", 3599.99, 400, 2449.99, 15.0, false},
        {1004, "Shirt", 2599.99, 390, 1949.99, 8.0, false},
        {1005, "Cap", 799.99, 20, 649.99, 5.0, true},
    };

    displayMenu();

    for(int i=0; i<5; i++)
    {
        cout<<"{"<<"Item Number: "<<items[i].ItemNumber
        <<", Item Name: "<<items[i].ItemName
        <<", Sell Rate: "<<items[i].SellRate
        <<", Ouantity on Hand: "<<items[i].QOH
        <<", Buy Rate: "<<items[i].BuyRate
        <<", Discount Rate: "<<items[i].DiscountRate
        <<", Is Item Removed: "<<items[i].isItemRemoved
        <<"}"<<endl;
    };
}

void displayMenu()
{
    int n;
    do
    {
        cout<<"1. Sell an item"<<endl;
        cout<<"2. Stock Item"<<endl;
        cout<<"3. Remove an Item"<<endl;
        cout<<"4. Put Item on Sale"<<endl;
        cout<<"5. Display items"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";

        cin>>n;

        switch(n)
        {
            case 1:
                SellItem(items, 5);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                displayItems(items, 5);
                break;
            case 0:
                cout<<"Exiting..."<<endl;
                break;
            default:
                cout<<"Invalid input"<<endl;
                break;
        }
    }while (n != 0);
}

int GetItem(int iNum, ITEM *items, int num)
{
    for(int i=0; i<num; i++)
    {
        if(items[i].ItemNumber== iNum)
            return i;
    }
    return -1;
}

void displayItems(ITEM *items, int num)
{
    for(int i=0; i<n; i++)
    {
        cout<<"{"<<"Item Number: "<<items[i].ItemNumber
        <<", Item Name: "<<items[i].ItemName
        <<", Sell Rate: "<<items[i].SellRate
        <<", Ouantity on Hand: "<<items[i].QOH
        <<", Buy Rate: "<<items[i].BuyRate
        <<", Discount Rate: "<<items[i].DiscountRate
        <<", Is Item Removed: "<<items[i].isItemRemoved
        <<"}"<<endl;
    }
}

void SellItem(ITEM *items, int num)
{
    int ItemNo, SellQty, index;
    cout<<"Enter Item Number to sell: ";
    cin>>ItemNo;
    index = GetItem(ItemNo, items, num);
    if (index == -1)
    {
        cout<<"Item is not present : "<<ItemNo<<endl;
        return;
    }
    if(items[index].isItemRemoved)
    {
        cout<<"Item is removed"<<ItemNo<<endl;
        return;
    }

    cout<<"Enter quantity to sell: ";
    cin>>SellQty;
    if (SellQty > items[index].QOH)
    {
        cout<<"Qunatity not available"<<endl;
        return;
    }

    cout<<"Sell transaction: {"<<items[index].ItemNumber<<", "
        <<items[index].ItemName<<", "<<SellQty<<", "<<items[index].SellRate
        <<SellQty * items[index].SellRate<<"}"<<endl;
    
    items[index].QOH -= SellQty;    
}