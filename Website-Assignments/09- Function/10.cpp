#include <iostream>
using namespace std;

// Write Your Function Here
int minpositive(int aon[], int aonCount)
{
  int check = 1000;
  for (int i = 0; i < aonCount; i++)
  {
    if (aon[i] > 0 && aon[i] < check)
    {
      check = aon[i];
    }
  }
  return check;
}

int main()
{
  int numbers[] = { -10, -20, 15, 100, 10, 5, -50, 0 }; // 5
  int numssize = size(numbers);
  cout << minpositive(numbers, numssize) << "\n";
  return 0;
}