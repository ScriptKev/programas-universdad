#include <iostream>
using namespace std;

int processOption(int &optionSelected, float &base, float &height, float &radio, float &sizeSquare)
{
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
    cout << "Opccion no disponible, vuelva a ejecutar el programa y elija una opccion valida." << endl;
    break;
  }
}