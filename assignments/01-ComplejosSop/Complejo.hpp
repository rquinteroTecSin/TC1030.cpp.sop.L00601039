#pragma once
#include <iostream>

class Complejo {
private:
    int real, imag;
public:
    Complejo();
    Complejo(int, int);

    int getReal();
    void setReal(int);
    int getImag();
    void setImag(int);

    Complejo operator+(Complejo);
    Complejo operator++();
    bool operator==(Complejo);

    friend std::ostream& operator<<(std::ostream&, const Complejo);
};