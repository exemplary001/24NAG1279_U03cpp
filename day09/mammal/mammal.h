#pragma once

class Mammal {
public:
    virtual void speak() = 0;
    virtual void eat() = 0;
    virtual void walk() = 0;
    virtual ~Mammal() {}
};