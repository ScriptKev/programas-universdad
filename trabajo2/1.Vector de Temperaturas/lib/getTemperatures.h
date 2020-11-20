#include <iostream>
#include <vector>
using namespace std;

float getTemperatures(vector<float> &temperatures)
{
  for (int i = 0; i < temperatures.size(); i++)
  {
    cout << i + 1 << " Ingrese una temperatura: ";
    cin >> temperatures[i];
  }
}