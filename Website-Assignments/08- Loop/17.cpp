#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 102; i++)
  {
    if (i <= 20 || i >= 100)
    {
      if (i < 10)
      {
        cout << "00" << i << "\n";
      }
      else if (i >= 10 && i < 100)
      {
        cout << "0" << i << "\n";
      }
      else
      {
        cout << i << "\n";
      }
    }
  }

  return 0;
}
/*
Output Needed
  001
  002
  003
  004
  005
  006
  007
  008
  009
  010
  011
  012
  013
  014
  015
  016
  017
  018
  019
  020
  100
  101
  102
*/