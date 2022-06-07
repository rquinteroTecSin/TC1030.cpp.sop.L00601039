#pragma once
#include <iostream>
#include "Polar.hpp"

class Rect {
private:
    int x;
    int y;
public:
    Rect();
    Rect(int, int);

    Rect operator+(Rect);
    Rect operator+(Polar);

    int getX();
    int getY();

    friend std::ostream& operator<<(std::ostream&, Rect);
};