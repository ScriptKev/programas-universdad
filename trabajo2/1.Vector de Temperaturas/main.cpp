#include <iostream>
#include <array>
#include <vector>
#include "./lib/getTemperatures.h"
#include "./lib/sortDescTemperatures.h"
#include "./lib/showTemperatures.h"
#include "./lib/averageTemperatures.h"
using namespace std;

int main()
{
  vector<float> temperatures(3);

  getTemperatures(temperatures);
  sortDescTemperatures(temperatures);
  showTemperatures(temperatures);
  averageTemperatures(temperatures);

  system("pause");
  return 0;
}
