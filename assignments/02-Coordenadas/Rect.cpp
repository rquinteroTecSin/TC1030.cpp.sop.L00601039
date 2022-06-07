#include "Rect.hpp"
#include "Polar.hpp"

#include <cmath>

Rect::Rect()
{
}

Rect::Rect(int valX,int valY) : x{valX}, y{valY} 
{
}

Rect Rect::operator+(Rect val)
{
        Rect tmp;
        tmp.x = this->x + val.x;
        tmp.y = this->y + val.y;

        return tmp;
}

Rect Rect::operator+(Polar p)
{
    Rect tmp;
    tmp.x = this->x + p.getR() * std::cos(p.getTheta());
    tmp.y = this->y + p.getR() * std::sin(p.getTheta());

    return tmp;
}

int Rect::getX()
{
    return x;
}

int Rect::getY()
{
    return y;
}

std::ostream& operator<<(std::ostream& output, Rect r)
{
    output << "(" << r.getX() << ", " << r.getY() << ")\n";
    return output;
}