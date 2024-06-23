#pragma once
#include "mammal.h"

class FamilyHuman : public Mammal {
protected:
    int intelligenceLevel;
public:
    FamilyHuman(int intelligence) : intelligenceLevel(intelligence) {}
    virtual ~FamilyHuman() {}
};