#include <iostream>
#include <vector>
using namespace std;

float averageTemperatures(vector<float> temperatures)
{
  float sum;

  for (int i = 0; i < temperatures.size(); i++)
  {
    sum = sum + temperatures[i];
  }

  cout << "Promedio de las temperaturas es: " << sum / temperatures.size() << endl;
}