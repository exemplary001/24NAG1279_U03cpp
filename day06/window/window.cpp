#include "window.h"
#include <iostream>
#include <string>
using namespace std;

Window::Window(string t, bool v) : title(t), visible(v) {}

string Window::getTitle(void)
{
    return title;
}

bool Window::getVisible(void)
{
    return visible;
}

void Window::setTtile(string t)
{
    title = t;
}

void Window::setVisible(bool v)
{
    visible = v;
}

void Window::hide(void)
{
    visible = false;
}

void Window::show(void)
{
    visible = true;
}

void Window::display(void)
{
    cout<<"Window Title: "<<title
        <<"\tVisible: "<<(visible ? "Yes" : "No")<<endl;
}