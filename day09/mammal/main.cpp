#include <iostream>
#include <vector>
#include "tiger.h"
#include "lion.h"
#include "man.h"
#include "woman.h"
#include "boxer.h"
#include "hound.h"
using namespace std;

int main()
{
    vector <Mammal*> mammals;
    int choice;

    while (true)
    {
        cout<<"Menu : "<<endl;
        cout<<"1. Tiger"<<endl;
        cout<<"2. Lion"<<endl;
        cout<<"3. Man"<<endl;
        cout<<"4. Woman"<<endl;
        cout<<"5. Boxer"<<endl;
        cout<<"6. Hound"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        if (choice == 7)
            break;
        
        int level;
        switch (choice)
        {
            case 1:
                cout<<"Enter agility level of Tiger : ";
                cin>>level;
                mammals.push_back(new Tiger(level));
                break;

            case 2:
                cout<<"Enter agility level of Lion : ";
                cin>>level;
                mammals.push_back(new Lion(level));
                break;

            case 3:
                cout<<"Enter intelligence level of Man : ";
                cin>>level;
                mammals.push_back(new Man(level));
                break;

            case 4:
                cout<<"Enter intelligence level of Woman : ";
                cin>>level;
                mammals.push_back(new Woman(level));
                break;

            case 5:
                cout<<"Enter loyalty level of Boxer : ";
                cin>>level;
                mammals.push_back(new Boxer(level));
                break;

            case 6:
                cout<<"Enter loyalty level of Hound : ";
                cin>>level;
                mammals.push_back(new Hound(level));
                break;
            
            default:
                cout<<"invalid choice!"<<endl;
                break;
        }
    }

    for (Mammal* mammal : mammals)
    {
        mammal->speak();
        mammal->eat();
        mammal->walk();
        delete mammal;
    }

    return 0;
}