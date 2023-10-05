#include <iostream>
using namespace std;

// Write Your Function Here
int sumall (int aon[], int aonCount, int nn)
{
  int result = 0;
  for (int i = 0; i < aonCount; i++)
  {
    if (aon[i] != nn)
    {
      result += aon[i];
    }
  }
  return result;
}

int main()
{
  int numbers[] = { 13, 20, 3, 30, 5, 7, 40, 13 }; // 20 + 3 + 30 + 5 + 7 + 40 = 105
  int numssize = size(numbers);
  int noneed = 13;
  cout << sumall(numbers, numssize, noneed) << "\n";
  return 0;
}