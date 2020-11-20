#include <iostream>
using namespace std;

int sumArray(float matriz[3][3], float &acum)
{
  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      if (row != col)
      {
        acum = acum + matriz[row][col];
      }
    }
  }
}