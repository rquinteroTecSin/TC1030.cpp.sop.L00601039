#include <iostream>

#include "Complejo.hpp"

int main() 
{
  Complejo compA(8,5), compB(5,2), compC;

// Uso de los operadores sobrecargados ----------------
  compC=compA + compB;

  std::cout << "Complejo A:\n";
  std::cout << compA;

  std::cout << "Complejo B:\n";
  std::cout << compB;

  std::cout << "Suma de compA y compB= \n";
  std::cout << compC;

  std::cout << "Complejo A antes de incrementar\n";
  std::cout << compA;

  compC=++compA;

  std::cout << "Complejo C incrementado\n";
  std::cout << compC;

  if (compA == compB) 
    std::cout << "CompA y CompB son iguales " << "\n";
  else
    std::cout << "CompA y CompB son diferentes " << "\n";
}