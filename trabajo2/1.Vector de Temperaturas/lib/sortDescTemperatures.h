#include <iostream>
#include <vector>
using namespace std;

float sortDescTemperatures(vector<float> &temperatures)
{
  float aux;

  for (int i = 0; i < temperatures.size(); i++)
  {
    for (int j = 0; j < temperatures.size() - 1; j++)
    {
      if (temperatures[j] < temperatures[j + 1])
      {
        aux = temperatures[j];
        temperatures[j] = temperatures[j + 1];
        temperatures[j + 1] = aux;
      }
    }
  }
}
