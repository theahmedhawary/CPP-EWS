#include <iostream>
using namespace std;

int main()
{
  // For Loop
  for (int i = 100; i < 1200; i+=100)
  {
    cout << i << "\n";
    if (i > 100 && i < 1100)
    {
      cout << i << "\n";
    }
  }

  cout << "======\n";

  // While Loop => Another Solution
  int j = 100;
  while(j <= 1000)
  {
    cout << j << "\n";
    j += 100;
    cout << j << "\n";
  }

  return 0;
}
/*
Output Needed
  100
  200
  200
  300
  300
  400
  400
  500
  500
  600
  600
  700
  700
  800
  800
  900
  900
  1000
  1000
  1100
*/