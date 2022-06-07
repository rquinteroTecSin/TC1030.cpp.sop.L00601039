#include "Complejo.hpp"
#include <iostream>

Complejo::Complejo() 
{
    real=0.0;
    imag=0.0;
}

Complejo::Complejo(int r, int i) : real{r}, imag{i}
{
}

int Complejo::getReal()
{
    return real;
}

void Complejo::setReal(int r)
{
    real=r;
}

int Complejo::getImag()
{
    return imag;
}

void Complejo::setImag(int i)
{
    imag=i;
}

Complejo Complejo::operator+(Complejo c2) 
{
    int realN = real + c2.real;
    int imagN = imag + c2.imag;

    Complejo nuevo(realN, imagN);

    return nuevo;
}

Complejo Complejo::operator++()
{
    real++;
    imag++;

    return *this;
}

bool Complejo::operator==(Complejo otro)
{
    if (real == otro.real && imag == otro.imag) 
        return true;
    else 
        return false;
}

std::ostream& operator<<(std::ostream& output, const Complejo c)
{
    output << c.real << " + " << c.imag << "i\n";
    return output;
}