#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  cout << "First " << nums[0] << "\n";
  cout << "Last " << nums[5] << "\n";
/*
  "First: 10"
  "Last: 50"
*/

  // Method 2
  cout << "First " << nums.front() << "\n";
  cout << "Last " << nums.back() << "\n";
/*
  "First: 10"
  "Last: 50"
*/

  // Method 3
  cout << "First " << nums.at(0) << "\n";
  cout << "First " << nums.at(5) << "\n";
/*
  "First: 10"
  "Last: 50"
*/

  return 0;
}