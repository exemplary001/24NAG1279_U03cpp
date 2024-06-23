#pragma once
#include <string>
using namespace std;

class Employee {
    int id;
    string name;
    int basic;
public:
    Employee(int id,string name, int basic);

    int getId() const;
    string getName() const;
    int getBasic() const;

    void setId(int id);
    void setName(string name);
    void setBasic(int basic);

    int calcSalary() const;
};