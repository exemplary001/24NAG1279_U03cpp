#pragma once
#include <string.h>
#include <iostream>
using namespace std;

class MyString {
    char *str;
public:
    MyString(const char *str);
    MyString(const MyString &rhs);
    ~MyString();
    void DisplayString(void);
    void SetString(const char *str);
    int GetLength(void) const;

    MyString operator=(MyString const &rhs);
    MyString operator+(MyString const &rhs);
    MyString operator+(const char &ch);
    bool operator>(MyString const &rhs);
    bool operator>=(MyString const &rhs);
    bool operator<(MyString const &rhs);
    bool operator<=(MyString const &rhs);
    bool operator==(MyString const &rhs);
    bool operator!=(MyString const &rhs);
    char &operator[](const int index);

    friend MyString operator+(const char &ch, MyString const &rhs);
    friend MyString operator+(const char *str, MyString const &rhs);
    friend ostream &operator<<(ostream &out, MyString const &rhs);
};