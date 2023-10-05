#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 20, 14, 28, 40, 80, 15, 30};
  int numSize = size(nums);

  for (int i = 0; i < numSize; i++)
  {
    if (nums[i] + nums[i] == nums[i + 1])
    {
      cout << nums[i] << "\n";
    }
  }

  return 0;
}
/*
Output Needed
  10
  14
  40
  15
*/