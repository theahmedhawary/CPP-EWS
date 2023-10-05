#include <iostream>
using namespace std;

// Write Your Function Here
int plusandmultiply(int aon[], int numsCount)
{
  int evenNums = 0;
  int oddNums = 1;
  for (int i = 0; i < numsCount; i++)
  {
    if (aon[i] % 2 == 0)
    {
      evenNums += aon[i];
    }
    else if (aon[i] % 2 != 0)
    {
      oddNums *= aon[i];
    }
  }
  return evenNums + oddNums;
}

int main()
{
  int numbers[] = { 10, 20, 3, 30, 5, 7, 40 };
  int numssize = size(numbers);
  cout << plusandmultiply(numbers, numssize) << "\n";
  // Even Numbers -> 10 + 20 + 30 + 40 = 100
  // Odd Numbers  -> 3 * 5 * 7 = 105
  // Total = 100 + 105 = 205
  return 0;
}