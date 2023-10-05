#include <iostream>
using namespace std;

int main()
{
  int num1;
  cout << "Num1: ";
  cin >> num1;
  int num2;
  cout << "Num2: ";
  cin >> num2;

  if (num1 > num2)
  {
    int swap;
    swap = num2;
    num2 = num1;
    num1 = swap;
  }

  for (int i = num1 + 1; i < num2; i++)
  {
    if (i % 2 == 0)
    {
      continue;
    }
    cout << i << "\n";
  }

/*
  Test Case 1
  Number One: 1
  Number Two: 9
  Output: 3, 5, 7

  Test Case 2
  Number One: 2
  Number Two: 15
  Output: 3, 5, 7, 9, 11, 13

  Test Case 3
  Number One: 8
  Number Two: 2
  Output: 3, 5, 7
*/
  return 0;
}
