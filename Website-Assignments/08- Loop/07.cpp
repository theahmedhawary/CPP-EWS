#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i = 2; i < 130; i*=2)
  {
    cout << i << "\n";
  }

  cout << "=======\n";

  // While Loop
  int j = 2;
  while (j < 130)
  {
    cout << j << "\n";
    j*=2;
  }

  return 0;
}
/*
Output Needed
  2
  4
  8
  16
  32
  64
  128
*/