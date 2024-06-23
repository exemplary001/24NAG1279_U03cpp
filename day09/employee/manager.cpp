#include "manager.h"

Manager::Manager(int id, string name, int basic, float HRAPercent, float DAPercent) :
        Employee(id, name, basic), HRAPercent(HRAPercent), DAPercent(DAPercent) {}

float Manager::getHRAPercent() const
{
    return HRAPercent;
}

float Manager::getDAPercent() const
{
    return DAPercent;
}

void Manager::setHRAPercent(float HRAPercent)
{
    this->HRAPercent = HRAPercent;
}


void Manager::setDAPercent(float DAPercent)
{
    this->DAPercent = DAPercent;
}

int Manager::calcSalary() const 
{
    int basic = getBasic();
    int hra = basic * HRAPercent / 100;
    int da = basic * DAPercent / 100;
    return basic + hra + da;
}