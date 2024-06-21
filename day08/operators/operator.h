#pragma once
#include <iostream>
using namespace std;

class Point {
    int x,y;
public:
    Point(int x, int y);
    Point();

    Point operator=(Point const &pt);
    Point operator+(Point const &pt) const;
    Point operator+(const int num) const;
    Point operator-(Point const &pt) const;
    Point operator-(const int num) const;
    Point operator++();
    Point operator++(int);
    Point operator--() ;
    Point operator--(int);

    friend Point operator+(const int num, Point const &pt);
    friend Point operator-(const int num, Point const &pt);
    friend ostream &operator<<(ostream& out, Point const &pt);
};