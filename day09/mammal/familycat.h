#pragma once
#include "mammal.h"

class FamilyCat : public Mammal {
protected:
    int agilityLevel;
public:
    FamilyCat(int agility) : agilityLevel(agility) {}
    virtual ~FamilyCat() {}
};