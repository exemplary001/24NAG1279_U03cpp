#include "mobilrphone.h"

int main()
{
    MobilePhone phone1("Samsung", "s24 Ultra", 119999, 60);

    phone1.MakeCall();
    phone1.HangUp();
    phone1.SendMessage("Sample Message.");
    phone1.ReadMessages();
    phone1.ChargePhone(30);
    phone1.MakeCall();
    phone1.SendMessage("Phone charged!");

    return 0;
}