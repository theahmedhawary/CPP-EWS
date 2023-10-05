#include <iostream>
using namespace std;

// Write Your Function Here
int firstnegative(int aon[], int aonCount)
{
  int result;
  for (int i = 0; i < aonCount; i++)
  {
    if (aon[i] < 0 && aon[i] > aon[0])
    {
      result = aon[i];
    }
  }
  return result;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0, -5, -10 }; // -5
  int numssize = size(numbers);
  cout << firstnegative(numbers, numssize) << "\n";
  return 0;
}