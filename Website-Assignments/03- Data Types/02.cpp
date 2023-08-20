#include <iostream>
using namespace std;

int main()
{
  double salary = 5000.98;
  cout << sizeof(salary) << "\n";     // 8 Bytes
  cout << sizeof(salary) * 8 << "\n"; // 64 Bits
  return 0;
}