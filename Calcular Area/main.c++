#include <iostream>
#include "./lib/selectOption.h"
#include "./lib/processOption.h"
#include "./lib/calculateArea.h"
#include "./lib/showResult.h"

using namespace std;

int main()
{
  int optionSelected;
  float resultCalculateArea, base, height, radio, sizeSquare;

  selectOption(optionSelected);
  processOption(optionSelected, base, height, radio, sizeSquare);
  calculateArea(optionSelected, resultCalculateArea, base, height, radio, sizeSquare);
  showResult(optionSelected, resultCalculateArea);

  system("pause");
  return 0;
}
