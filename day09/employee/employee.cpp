#include "employee.h"

Employee::Employee(int id, string name, int basic) :
            id(id), name(name), basic(basic) {}

int Employee::getId() const 
{
    return id;
}

string Employee::getName() const 
{
    return name;
}

int Employee::getBasic() const 
{
    return basic;
}

void Employee::setId(int id)
{
    this->id = id;
}

void Employee::setName (string name)
{
    this->name = name;
}

void Employee::setBasic(int basic)
{
    this->basic = basic;
}

int Employee::calcSalary() const 
{
    return basic;
}