#include <array>
#include <iostream>
using namespace std;

int main()
{
  int nums[] = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << sizeof(nums) / sizeof(nums[0]) << "\n"; // 6

  // Method 2
  cout << end(nums) - begin(nums) << "\n"; // 6

  // Method 3
  cout << size(nums) << "\n"; // 6

  // Method 4
  cout << sizeof(nums) / 4 << "\n"; // 6

  return 0;
}