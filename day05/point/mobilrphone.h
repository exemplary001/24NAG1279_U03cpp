#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MobilePhone
{
private:
    string brand;
    string model;
    double price;
    int batteryLife;
    bool inCall;
    vector<string> messages;

public:
    MobilePhone(string b, string m, double p, int bl)
        : brand(b), model(m), price(p), batteryLife(bl), inCall(false) {}
    
    void MakeCall()
    {
        if(inCall)
            cout<<"Already in a Call."<<endl;
        else if (batteryLife <= 0)
            cout<<"Battery is dead. Cannot make a call."<<endl;
        else
        {
            inCall = true;
            batteryLife -= 10;
            cout<<"Call started . . ."<<endl;
        }
    }

    void HangUp()
    {
        if(inCall)
        {
            inCall = false;
            cout<<"Call ended."<<endl;
        }
        else
            cout<<"No outgoing call."<<endl;
    }

    void SendMessage(const string &message)
    {
        if (batteryLife <= 0)
            cout<<"Battery is low. Cannot send message."<<endl;
        else
        {
            messages.push_back("Sent: " + message);
            batteryLife -= 5;
            cout<<"Message sent: "<<message<<endl;
        }
    }

    void ReadMessages()
    {
        if(messages.empty())
            cout<<"No messages."<<endl;
        else
        {
            cout<<"Messages: "<<endl;
            for (const auto &msg : messages)
                cout<<msg<<endl;
        }
    }

    void ChargePhone(int percentage)
    {
        batteryLife += percentage;
        if (batteryLife > 100)
            batteryLife = 100;
        cout<<"Phone charged. Current battery life: "<<batteryLife<<" %"<<endl;
    }
};