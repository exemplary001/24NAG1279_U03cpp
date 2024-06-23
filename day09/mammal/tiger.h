#pragma once
#include "familycat.h"

class Tiger: public FamilyCat {
public:
    Tiger(int agility) : FamilyCat(agility) {}
    void speak() override;
    void eat() override;
    void walk() override;
};