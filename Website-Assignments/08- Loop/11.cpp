#include <iostream>
using namespace std;

int main()
{
  // Friends Array
  string friends[] = {"Ahmed", "Osama", "Ameer"};
  int Fsize = sizeof(friends) / sizeof(friends[0]);
  // int Fsize = size(friends);

  for (int i = 0; i < Fsize; i++)
  {
    cout << "=========\n";
    cout << "= " << friends[i] << " =\n";
    cout << "==================\n== ";
    for(int j = 0; j < size(friends[i]); j++)
    {
      cout << friends[i][j];
      if (j < size(friends[i]) - 1)
      {
        cout << ", ";
      }
    }
    cout << " =\n==================\n";

  }


  return 0;
}
/*
Output Needed
  =========
  = Ahmed =
  ==================
  == A, h, m, e, d =
  ==================

  =========
  = Osama =
  ==================
  == O, s, a, m, a =
  ==================

  =========
  = Ameer =
  ==================
  == A, m, e, e, r =
  ==================
*/