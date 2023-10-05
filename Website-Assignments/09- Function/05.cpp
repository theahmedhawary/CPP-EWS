#include <iostream>
#include <cmath>
using namespace std;

// Write Your Function Here
void thepower(int base, int power)
{
  cout << 2 * 2 * 2 * 2 * 2 << "\n";

  cout << pow(base, power) << "\n";

  int start = 1;
  for (int i = 0; i < power; i++)
  {
    start *= base;
  }
  cout << start << "\n";
}

int main()
{
  thepower(2, 5); // 32
  return 0;
}