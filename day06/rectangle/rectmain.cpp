#include "rectangle.h"

int main()
{
    Rectangle rect(10, 20, 100, 150);

    rect.display();
    rect.move(20,50);
    rect.display();
    rect.expand(10,20);
    rect.display();

}