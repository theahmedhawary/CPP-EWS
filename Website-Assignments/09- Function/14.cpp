#include <iostream>
using namespace std;

// Write Your Function Here
int calculate(int n1, int n2, string op = "a")
{
  if (op == "a" || op == "add")
  {
    return n1 + n2;
  }
  else if (op == "s" || op == "subtract")
  {
    return n1 - n2;
  }
  else if (op == "m" || op == "multiply")
  {
    return n1 * n2;
  }
  else
  {
    return 0;
  }
}

int main()
{
  cout << calculate(10, 20) << "\n";             // 30
  cout << calculate(10, 20, "a") << "\n";        // 30
  cout << calculate(10, 20, "s") << "\n";        // -10
  cout << calculate(10, 20, "subtract") << "\n"; // -10
  cout << calculate(10, 20, "multiply") << "\n"; // 200
  cout << calculate(10, 20, "m") << "\n";        // 200
  cout << calculate(10, 20, "Invalid") << "\n";  // 0
  return 0;
}