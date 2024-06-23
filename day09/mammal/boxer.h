#pragma once
#include "familydog.h"

class Boxer : public FamilyDog {
public:
    Boxer(int loyalty) : FamilyDog(loyalty) {}
    void speak() override;
    void eat() override;
    void walk() override;
};