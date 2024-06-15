#include <iostream>
#include <string>
using namespace std;

typedef struct book_rec {
    int isbn_no;
    string name;
    string author;
    float cost;
} BOOK;

int main()
{
    BOOK books[5] = {
        {1001, "C++ for beginners", "Mark Robinson", 100},
        {1002, "C for beginners", "Charles Robinson", 150},
        {1003, "C# for beginners", "Mark Smith", 200},
        {1004, "Python for beginners", "Mark Mark", 300},
        {1005, "Java for beginners", "Rob Robinson", 120},
    };

    for (int i=0; i<5; i++)
    {

    cout<<"{"<<"isbn_no: "<<books[i].isbn_no
        <<", name: "<<books[i].name
        <<", author: "<<books[i].author
        <<", cost: "<<books[i].cost
        <<"}"<<endl;
    };
}