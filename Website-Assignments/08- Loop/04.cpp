#include <iostream>
using namespace std;

int main()
{
  //For Loop
  for (int i = 0; i < 20; i+=2)
  {
    if (i == 10 || i == 12)
    {
      continue;
    }
    cout << i << "\n";
  }

  cout << "=====\n";

  // While Loop
  int j = 0;
  while (j < 20)
  {
    if (j < 10 || j > 12)
    {
      cout << j << "\n";
    }
    j+=2;
  }

  return 0;
}
/*
Output Needed
  0
  2
  4
  6
  8
  14
  16
  18
*/