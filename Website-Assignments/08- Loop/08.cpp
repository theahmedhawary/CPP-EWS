#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i = 2; i < 128; i = i * 2 + 2)
  {
    cout << i << "\n";
  }

  cout << "=======\n";

  // While Loop
  int j = 2;
  while (j < 128)
  {
    cout << j << "\n";
    j = j * 2 + 2;
  }

  return 0;
}
/*
Output Needed
  2
  6
  14
  30
  62
  126
*/