#include <iostream>
using namespace std;

int main()
{
  for (int i = 30; i >= 1; i-=3)
  {
    cout << i << "\n";
  }

  cout << "==========\n";

  for (int j = 30; j >= 1; j-=3)
  {
    if (j % 2 != 0)
    {
      cout << j << "\n";
    }
  }

  return 0;
}
/*
Output Needed
  30
  27
  24
  21
  18
  15
  12
  9
  6
  3

Without Even Numbers
  27
  21
  15
  9
  3
*/