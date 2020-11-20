#include <iostream>
using namespace std;

int showResult(int &optionSelected, float &resultCalculateArea)
{
  switch (optionSelected)
  {
  case 1: /*Circulo*/
    cout << "El area de su circulo es: " << resultCalculateArea << "cm2" << endl;
    break;

  case 2: /*Cuadrado*/
    cout << "El area de su cuadrado es: " << resultCalculateArea << "cm2" << endl;
    break;

  case 3: /*Rectangulo*/
    cout << "El area de su rectangulo es: " << resultCalculateArea << "cm2" << endl;
    break;

  case 4: /*Triangulo*/
    cout << "El area de su triangulo es: " << resultCalculateArea << "cm2" << endl;
    break;

  default:
    return 0;
    break;
  }
}