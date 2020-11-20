#include <iostream>
using namespace std;

int selectOption(int &optionSelected)
{
  cout << "|------------------- MENU ------------------|" << endl;
  cout << "=============== 1. Circulo    ===============" << endl;
  cout << "=============== 2. Cuadrado   ===============" << endl;
  cout << "=============== 3. Rectangulo ===============" << endl;
  cout << "=============== 4. Triangulo  ===============" << endl;
  cout << "=============================================" << endl;
  cout << "============= Elgia una opccion =============" << endl;
  cin >> optionSelected;
}