#pragma once
#include "mammal.h"

class FamilyDog : public Mammal {
protected:
    int loyaltyLevel;
public:
    FamilyDog(int loyalty) : loyaltyLevel(loyalty) {}
    virtual ~FamilyDog() {}
};