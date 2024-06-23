#pragma once
#include "familyhuman.h"

class Man: public FamilyHuman {
public:
    Man(int intelligence) : FamilyHuman(intelligence) {}
    void speak() override;
    void eat() override;
    void walk() override;
};