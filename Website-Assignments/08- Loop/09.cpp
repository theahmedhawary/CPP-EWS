#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Mohamed", "Sayed", "Gamal"};

  // For Loop
  for (int i = 1; i < 3; i++)
  {
    cout << friends[i] << "\n";
  }

  cout << "=======\n";

  //While Loop
  int j = 1;
  while (j < 3)
  {
    cout << friends[j] << "\n";
    j++;
  }

  return 0;
}
/*
Output Needed
  "Mohamed"
  "Sayed"
*/