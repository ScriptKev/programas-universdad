#include <iostream>
#include "./lib/showArray.h"
#include "./lib/sumArray.h"
#include <windows.h>
using namespace std;

int main()
{
  HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

  float acum = 0;
  float matriz[3][3] = {
      {1.9, 2.5, 3},
      {4, 5, 6.23},
      {7, 8, 10.4}};

  showArray(matriz);
  sumArray(matriz, acum);

  SetConsoleTextAttribute(color, 7);
  cout << "la suma de los elementos de la diagonal principal es: ";

  SetConsoleTextAttribute(color, 10);
  cout << acum << endl;

  SetConsoleTextAttribute(color, 7);
  system("pause");
  return 0;
}
