#pragma once
#include <string>
using namespace std;

class Book {
    int bookId;
    string bookName;
    string author;
    float price;
    int qoh;

public:
    Book(int id, string name, string auth,float pr, int qty);

    int getBookId(void);
    string getBookName(void);
    string getAuthorName(void);
    float getPrice(void);
    int getQoh(void);

    void setBookId(int id);
    void setBookName(string name);
    void setAuthorName(string auth);
    void setPrice(float pr);
    void setQoh(int qty);

    void buy(int quantity);
    void sell(int quantity);
    void display();
};