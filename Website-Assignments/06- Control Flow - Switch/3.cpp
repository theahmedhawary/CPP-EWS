#include <iostream>
using namespace std;

int main()
{
  int num;
  cin >> num;

  // If Condition
  if (num == 10)
  {
    cout << "Case 1";
  }
  else if (num > 19 && num < 21)
  {
    cout << "Case 2";
  }
  else if (num > 29 && num < 33)
  {
    cout << "Case 3";
  }
  else
  {
    cout << "Invalid Number";
  }

  // Switch Syntax
  switch (num)
  {
    case 10:
      cout << "Case 1\n";
      break;
    case 20:
      cout << "Case 2\n";
      break;
    case 30:
    case 31:
    case 32:
      cout << "Case 3\n";
      break;
    default:
      cout << "Invalid Number\n";
      break;
  }

  return 0;
}