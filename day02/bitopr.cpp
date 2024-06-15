#include <iostream>
#include <iomanip>

using namespace std;

void displayMenu()
{
    cout<<"Menu"<<endl;
    cout<<"1. Set Status value (0-2)"<<endl;
    cout<<"2. Set Error value (0-5)"<<endl;
    cout<<"3. Set Busy Status value (0-2)"<<endl;
    cout<<"4. Get Status value"<<endl;
    cout<<"5. Get Error value"<<endl;
    cout<<"6. Get Busy Status value"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"GetOption:"<<endl;
}

int main()
{
    unsigned char statusByte = 0;
    int option;
    bool running = true;

    while (running) {
        displayMenu();
        cout<<"Enter option: ";
        cin>>option;
        int val;

        cout<<"Status Byte: "<<hex<<(int)statusByte<<endl;

    switch (option)
    {
        case 1:
        {
            cout<<"Enter Status value (0-2): ";
            cin>>val;
            statusByte = (statusByte & 0xfc) | val;
            break;
        }
        case 2:
        {
            cout<<"Enter Error value (0-5): ";
            cin>>val;
            statusByte = (statusByte & 0xe3) | (val<<2);
            break;
        }
        case 3:
        {
            cout<<"Enter Busy Status value (0-2): ";
            cin>>val;
            statusByte = (statusByte & 0x1f) | (val<<5);
            break;
        }
        case 4:
        {
            val = (statusByte) & 0x03;
            cout<<"Current Status Value: "<<val<<endl;
            break;
        }
        case 5:
        {
            val = (statusByte >>2) & 0xe7;
            cout<<"Current Error Value: "<<val<<endl;
            break;
        }
        case 6:
        {
            val = (statusByte >> 5) & 0x03;
            cout<<"Current Busy Status Value: "<<val<<endl;
            break;
        }
        case 0:
            running = false;
            break;
        default:
        cout<<"Invalid option"<<endl;
        break;
    }
}
}
