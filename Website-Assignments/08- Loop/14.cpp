#include <iostream>
using namespace std;

int main()
{
  int num = 2;
  while (num < 520)
  {
    // Your Code Here
    if (num == 2)
    {
      num--;
    }
    cout << num << "\n";
    num = num * 2 + 2;
  }

  return 0;
}
/*
Output Needed
  1
  4
  10
  22
  46
  94
  190
  382
*/