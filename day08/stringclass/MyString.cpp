#include "MyString.h"
#include <iostream>
using namespace std;

MyString::MyString(const char *str)
{
    this->str = nullptr;
    SetString(str);
}

MyString::MyString(const MyString& rhs)
{
    SetString(rhs.str);
}

MyString::~MyString()
{
    delete[] this->str;
}

void MyString::DisplayString(void)
{
    cout<<this->str<<endl;
}

void MyString::SetString(const char *str)
{
    delete[] this->str;
    
    int len = strlen(str);

    this->str = new char[len + 1];
    strcpy(this->str, str);
}

int MyString::GetLength(void) const
{
    return strlen(this->str);
}

MyString MyString::operator=(MyString const& rhs)
{
    SetString(rhs.str);
    return *this;
}

MyString MyString::operator+(MyString const& rhs)
{
    int len1 = GetLength();
    int len2 = rhs.GetLength();

    char *newBuffer = new char[len1 + len2 + 1];
    strcpy(newBuffer, this->str);
    strcat(newBuffer, rhs.str);

    MyString strCopy(newBuffer);
    delete [] newBuffer;
    return strCopy;
}

MyString MyString::operator+(const char& ch)
{
    int len1 = this->GetLength();

    char *newBuffer = new char[len1 + 2];
    strcpy(newBuffer, this->str);
    newBuffer[len1] = ch;
    newBuffer[len1+1] = '\0';

    MyString strCopy(newBuffer);
    delete [] newBuffer;
    return strCopy;
}

MyString operator+(const char &ch, MyString const &rhs)
{
    int len1 = rhs.GetLength();
    
    char *newBuffer = new char[len1 + 2];
    newBuffer[0] = ch;
    strcpy(newBuffer+1, rhs.str);

    MyString strCopy(newBuffer);
    delete [] newBuffer;
    return strCopy;
}

MyString operator+(const char *str, MyString const &rhs)
{
    int len1 = strlen(str);
    int len2 = rhs.GetLength();

    
    char *newBuffer = new char[len1 + len2+ 1];
    strcpy(newBuffer, str);
    strcat(newBuffer, rhs.str);

    MyString strCopy(newBuffer);
    delete [] newBuffer;
    return strCopy;    
}

bool MyString::operator>(MyString const &rhs)
{
    if (strcmp(this->str, rhs.str) > 0)
        return true;
    return false;
}

bool MyString::operator>=(MyString const &rhs)
{
    if (strcmp(this->str, rhs.str) >= 0)
        return true;
    return false;
}

bool MyString::operator<(MyString const &rhs)
{
    if (strcmp(this->str, rhs.str) < 0)
        return true;
    return false;
}

bool MyString::operator<=(MyString const &rhs)
{
    if (strcmp(this->str, rhs.str) <= 0)
        return true;
    return false;
}

bool MyString::operator==(MyString const &rhs)
{
    if (strcmp(this->str, rhs.str) == 0)
        return true;
    return false;
}

bool MyString::operator!=(MyString const &rhs)
{
    if (strcmp(this->str, rhs.str) != 0)
        return true;
    return false;
}

char& MyString::operator[](const int index)
{
    return this->str[index];
}

ostream &operator<<(ostream &out, MyString const &rhs)
{
    out << rhs.str;
    return out;
}