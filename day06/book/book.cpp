#include "book.h"
#include <iostream>
#include <string>
using namespace std;

Book::Book(int id, string name, string auth, float pr, int qty)
        : bookId(id), bookName(name), author(auth), price(pr), qoh(qty) {}

int Book::getBookId(void)
{
    return bookId;
}

string Book::getBookName(void)
{
    return bookName;
}

string Book::getAuthorName(void)
{
    return author;
}

float Book::getPrice(void)
{
    return price;
}

int Book::getQoh(void)
{
    return qoh;
}

void Book::setBookId(int id)
{
    bookId = id;
}

void Book::setBookName(string name)
{
    bookName = name;
}

void Book::setAuthorName(string auth)
{
    author = auth;
}

void Book::setPrice(float pr)
{
    price = pr;
}

void Book::setQoh(int qty)
{
    qoh = qty;
}

void Book::buy(int quantity)
{
    qoh += quantity;
}

void Book::sell(int quantity)
{
    if(quantity <= qoh)
        qoh -= quantity;
    else
        cout<<"Not enough quantity on hand"<<endl;
}

void Book::display()
{
    cout<<"Book ID: "<<bookId<<", Book Name: "<<bookName
        <<", Author: "<<author<<", Price: Rs "<<price
        <<", Quantity on hand: "<<qoh<<endl;
}