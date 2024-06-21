#include "book.h"

int main()
{
    Book book1(101, "Godaan", "Premchand", 249.99, 120);

    book1.display();
    book1.buy(50);
    book1.display();
    book1.sell(20);
    book1.display();
    book1.sell(200);
    book1.display();

    return 0;
}