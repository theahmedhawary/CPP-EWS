#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "ameer", "Ashraf", "Amany"};

  // For Loop
  for (int i = 0; i < 5; i++)
  {
    if (friends[i][0] == 'A')
    {
      cout << friends[i] << "\n";
    }
  }

  cout << "======\n";

  // While Loop
  int j = 0;
  while (j < 5)
  {
    if (friends[j][0] == 'A')
    {
      cout << friends[j] << "\n";
    }
    j++;
  }

  return 0;
}
/*
Output Needed
  "Ahmed"
  "Ashraf"
  "Amany"
*/