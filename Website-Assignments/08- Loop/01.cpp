#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i = 0; i < 11; i++)
  {
    cout << i << "\n";
  }

  cout << "=========================\n";

  // While Loop
  int j = 0;
  while (j < 11)
  {
    cout << j << "\n";
    j++;
  }

  cout << "=========================\n";

  // Do While Loop
  int k = 0;
  do
  {
    cout << k << "\n";
    k++;
  } while (k < 11);

  return 0;
}
/*
For, While, Do While Output
  0
  1
  2
  3
  4
  5
  6
  7
  8
  9
  10
*/