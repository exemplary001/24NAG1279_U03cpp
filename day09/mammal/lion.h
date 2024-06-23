#pragma once
#include "familycat.h"

class Lion: public FamilyCat {
public:
    Lion(int agility) : FamilyCat(agility) {}
    void speak() override;
    void eat() override;
    void walk() override;
};