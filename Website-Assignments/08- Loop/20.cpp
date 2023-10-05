#include <iostream>
using namespace std;

int main()
{
  string names[] = {"Osama", "Ahmed", "Mahmoud", "Hagar", "Eman", "Salwa"};

  int namesSize = size(names);
  for (int i = 0; i < namesSize; i++)
  {
    if (size(names[i]) == 5)
    {
      cout << names[i] << "\n";
    }
  }

  return 0;
}
/*
Output Needed
  "Osama"
  "Ahmed"
  "Hagar"
  "Salwa"
*/