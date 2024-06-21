#include "window.h"

int main()
{
    Window win("Text Window #1", true);

    win.display();
    win.hide();
    win.display();
    win.show();
    win.display();

    return 0;
}