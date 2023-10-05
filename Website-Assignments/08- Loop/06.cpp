#include <iostream>
using namespace std;

int main()
{
  // For Loop
  int start = 10;
  for (int i = 0; i < 4; i++)
  {
    cout << start << "\n";
    start *= start;
  }

  cout << "=======\n";

  // While Loop
  int j = 0;
  while(j < 4)
  {
    cout << start << "\n";
    start *=start;
    j++;
  }

  return 0;
}
/*
Output Needed
  10
  100
  10000
  100000000
*/