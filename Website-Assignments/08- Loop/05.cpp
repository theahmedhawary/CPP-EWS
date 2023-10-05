#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i = 0; i < 30; i+=3)
  {
    cout << i << "\n";
  }

  cout << "========\n";

  // While Loop
  int j = 0;
  while (j < 30)
  {
    cout << j << "\n";
    j+=3;
  }

  return 0;
}
/*
Output Needed
  0
  3
  6
  9
  12
  15
  18
  21
  24
  27
*/