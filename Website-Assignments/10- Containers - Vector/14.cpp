#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> nums = { 5, 4, 3, 2, 1 };

  // Method One
  sort(nums.begin(), nums.end());

  // Method Two
  stable_sort(nums.begin(), nums.end());

  // Method
  sort(nums.begin(), nums.end(), greater<int>());
  reverse(nums.begin(), nums.end());

  // Method Three -> Use Swap + Loop For Challenge
  swap(nums.at(0), nums.at(4));
  swap(nums.at(1), nums.at(3));

  for (int i : nums)
  {
    cout << i << "\n";
  }

  return 0;
}
/*
Needed Output
  1
  2
  3
  4
  5
*/