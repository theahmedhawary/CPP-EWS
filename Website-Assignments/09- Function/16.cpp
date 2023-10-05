#include <iostream>
using namespace std;

// Write Your Function Here
int books(int first, int second, int third, int size)
{
  int small = first * 2;           // 10 * 2 = 20
  int mid = second * 4;            // 4 * 4 = 16
  int large = third * 6;           // 3 * 6 = 18
  int totalSize = size * 20;       // 4 * 20 = 80
  int totalspace = small + mid + large; // 20 + 16 + 18 = 54
  
  if (totalspace < totalSize)
  {
    return totalSize - totalspace; // 80 - 54 = 26
  }
  else
  {
    return 0;
  }
}

int main()
{
  cout << books(10, 4, 3, 4) << "\n"; // 26
  cout << books(10, 4, 3, 2) << "\n"; // 0
  return 0;
}