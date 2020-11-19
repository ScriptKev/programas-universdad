#include <iostream>
#include "./lib/calculateArea.h"

using namespace std;

int main()
{
  int optionSelected, resultCalculateArea, base, height, radio, sizeSquare;

  cout << "|------MENU-----|" << endl;
  cout << "| 1. Circulo    |" << endl;
  cout << "| 2. Cuadrado   |" << endl;
  cout << "| 3. Rectangulo |" << endl;
  cout << "| 4. Triangulo  |" << endl;
  cout << "|==============+|" << endl;
  cin >> optionSelected;

  switch (optionSelected)
  {
  case 1:
    cout << "Haz elegido Circulo" << endl;

    cout << "indique el radio de su Circulo: ";
    cin >> radio;

    break;

  case 2:
    cout << "Haz elegido Cuadrado" << endl;

    printf("indique el tama%co de su Cuadrado: ", 164); // solucionando la 'ñ'
    cin >> sizeSquare;

    break;

  case 3:
    cout << "Haz elegido Rectangulo" << endl;

    cout << "indique la base de su Rectangulo: ";
    cin >> base;

    cout << "indique la altura de su Rectangulo: ";
    cin >> height;

    break;

  case 4:
    cout << "Haz elegido Triangulo" << endl;

    cout << "indique la base de su Triangulo: ";
    cin >> base;

    cout << "indique la altura de su Triangulo: ";
    cin >> height;

    break;

  default:
    cout << "Opccion no disponible" << endl;
    break;
  }

  resultCalculateArea = calculateArea(optionSelected, base, height, radio, sizeSquare);
  cout << "El area de su figura geometrica es: " << resultCalculateArea << "cm2" << endl;

  system("pause");
  return 0;
}
