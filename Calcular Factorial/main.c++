#include <iostream>
using namespace std;

int main()
{
  int numBase, factorial = 1;

  cout << "Digite un numero: ";
  cin >> numBase;

  for (int i = 1; i <= numBase; i++)
  {
    factorial = factorial * i;
  }

  cout << "\nEl factorial del numero " << numBase << " es: " << factorial << endl;

  system("pause");
  return 0;
}