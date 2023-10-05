#include <iostream>
using namespace std;

// Write Your Functions Here
float avg(int aon[], int aonCount)
{
  float result = 0;
  for (int i = 0; i < aonCount; i++)
  {
    result += aon[i];
  }
  return result / aonCount;
}

int main()
{
  int money[] = { 10, 20, 15, 25, 30, 35 };
  int monsize = size(money);
  cout << avg(money, monsize) << "\n"; // 22.5
  return 0;
}