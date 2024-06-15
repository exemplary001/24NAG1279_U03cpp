#include <iostream>
#include <string>
using namespace std;

struct book_rec {
    int isbn_no;
    string name;
    string author;
    float cost;
};

int main()
{
    struct book_rec book;

    book.isbn_no = 32482912;
    book.name = "Harry Potter";
    book.author = "J. K. Rowling";
    book.cost = 899.99;

    cout<<"{"<<"isbn_no: "<<book.isbn_no
        <<", name: "<<book.name
        <<", author: "<<book.author
        <<", cost: "<<book.cost
        <<"}"<<endl;

    cout<<sizeof(string)<<endl;
    cout<<sizeof(struct book_rec)<<endl;
}