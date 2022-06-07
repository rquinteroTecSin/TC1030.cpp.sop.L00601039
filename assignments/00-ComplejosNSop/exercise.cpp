#include <iostream>

#include "Complejo.hpp"

int main() 
{
  Complejo compA(8,5), compB(5,2), compC;

  compC=compA.suma(compB);
  compC.print();
}
