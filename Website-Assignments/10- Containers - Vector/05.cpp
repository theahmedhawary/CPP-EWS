#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  vector<int> numbers = { 10, 20, 30, 40, 50, 60, 70, 80 };
  vector<int>::iterator it = numbers.begin();

  // Write Method One
  // (10 - 8) + (10 - 8) = 2 + 2 = 4
  it = numbers.begin() + (*numbers.begin() - numbers.size()) + (*numbers.begin() - numbers.size());

  // Write Method Two
  // ((10 - 8) + (10 - 8)) = (2 + 2) = 4
  it = numbers.end() - ((*numbers.begin() - numbers.size()) + (*numbers.begin() - numbers.size()));

  // Write Method Three
  // ((10 - 8) + (10 - 8)) = (2 + 2) = 4
  advance(it, ((*numbers.begin() - numbers.size()) + (*numbers.begin() - numbers.size())));

  cout << *it << "\n"; // 50
  return 0;
}