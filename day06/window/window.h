#pragma once
#include <string>
using namespace std;

class Window {
    string title;
    bool visible;

public:
    Window(string t, bool v);

    string getTitle();
    bool getVisible();

    void setTtile(string t);
    void setVisible(bool v);

    void hide();
    void show();
    void display();
};