#include "employee.h"

class Manager: public Employee {
    float HRAPercent;
    float DAPercent;
public:
    Manager(int id, string name, int basic, float HRAPercent, float DAPercent);

    float getHRAPercent() const;
    float getDAPercent() const;

    void setHRAPercent(float HRAPercent);
    void setDAPercent(float DAPercent);

    int calcSalary() const;
};