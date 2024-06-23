#pragma once
#include "familydog.h"

class Hound : public FamilyDog {
public:
    Hound(int loyalty) : FamilyDog(loyalty) {}
    void speak() override;
    void eat() override;
    void walk() override;
};