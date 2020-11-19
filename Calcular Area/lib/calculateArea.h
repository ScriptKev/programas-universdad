#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int calculateArea(int optionSelected, int base, int height, int radio, int sizeSquare)
{
  int result;

  switch (optionSelected)
  {
  case 1: /*Circulo*/
    result = M_PI * pow(radio, 2);
    break;

  case 2: /*Cuadrado*/
    result = sizeSquare * sizeSquare;
    break;

  case 3: /*Rectangulo*/
    result = base * height;
    break;

  case 4: /*Triangulo*/
    result = (base * height) / 2;
    break;

  default:
    cout << "Opccion invalida, no se pudo calcular el area";
    break;
  }

  return result;
}