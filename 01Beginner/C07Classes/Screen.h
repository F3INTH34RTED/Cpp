#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
#include <string>

class Screen
{
    private:
    int cursor = 0, height = 0, width = 0;
    std::string contents;

    public:
    Screen() = default;
    Screen(int h, int w) : height(h), width(w), contents(h * w, ' ') {}
    Screen(int h, int w, char c) : height(h), width(w), contents(h * w, c) {}
};

#endif