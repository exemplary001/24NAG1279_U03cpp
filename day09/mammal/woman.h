#pragma once
#include "familyhuman.h"

class Woman: public FamilyHuman {
public:
    Woman(int intelligence) : FamilyHuman(intelligence) {}
    void speak() override;
    void eat() override;
    void walk() override;
};