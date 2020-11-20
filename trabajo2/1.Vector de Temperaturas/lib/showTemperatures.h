#include <iostream>
#include <vector>
using namespace std;

float showTemperatures(vector<float> temperatures)
{
  cout << "Vector ordenado de forma Descendiente." << endl;

  for (int i = 0; i < temperatures.size(); i++)
    cout << i + 1 << " > " << temperatures[i] << endl;
}