#include <iostream>
using namespace std;

int main()
{
  // Example 1
  int vals[] = {100, 200, 600, 200, 100};
  // Output
  // "Array Is Palindrome"


  // Example 2
  int vals[] = {100, 200, 200, 100};
  // Output
  // "Array Is Palindrome"


  // Example 3
  int vals[] = {100, 300, 600, 200, 100};
  // Output
  // "Array Is Not Palindrome"


  int size = sizeof(vals) / sizeof(vals[0]) - 1;
  if (vals[0] == vals[size] && vals[1] == vals[size -1])
  {
    cout << "Array Is Palindrome\n";
  }
  else
  {
    cout << "Array Is Not Palindrome\n";
  }

  return 0;
}