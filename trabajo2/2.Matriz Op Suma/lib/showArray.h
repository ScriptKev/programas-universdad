#include <iostream>
#include <windows.h>
using namespace std;

int showArray(float matriz[3][3])
{
  HANDLE color = GetStdHandle(STD_OUTPUT_HANDLE);

  for (int row = 0; row < 3; row++)
  {
    for (int col = 0; col < 3; col++)
    {
      if (row == col)
      {
        SetConsoleTextAttribute(color, 7);
        cout << "\t" << matriz[row][col];
      }
      else
      {
        SetConsoleTextAttribute(color, 10);
        cout << "\t" << matriz[row][col];
      }
    }
    cout << endl;
  }
}