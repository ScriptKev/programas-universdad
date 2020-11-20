#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int calculateArea(int &optionSelected, float &resultCalculateArea, float &base, float &height, float &radio, float &sizeSquare)
{
  switch (optionSelected)
  {
  case 1: /*Circulo*/
    resultCalculateArea = M_PI * pow(radio, 2);
    break;

  case 2: /*Cuadrado*/
    resultCalculateArea = sizeSquare * sizeSquare;
    break;

  case 3: /*Rectangulo*/
    resultCalculateArea = base * height;
    break;

  case 4: /*Triangulo*/
    resultCalculateArea = (base * height) / 2;
    break;

  default:
    return 0;
    break;
  }

  return resultCalculateArea;
}