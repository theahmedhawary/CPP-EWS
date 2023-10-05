#include <iostream>
#include <cctype>
using namespace std;

// Write Your Function Here
string swapping(string msg)
{
  int msgSize = size(msg);
  string result = "";
  for (int i = 0; i < msgSize; i++)
  {
    if (islower(msg[i]) && msg[i] != 'h')
    {
      result += toupper(msg[i]);
    }
    else if (isupper(msg[i]) && msg[i] != 'H')
    {
      result += tolower(msg[i]);
    }
    else
    {
      result += msg[i];
    }
  }
  return result;
}

int main()
{
  cout << swapping("hero Of THe PROgramming") << "\n"; // hERO oF tHE proGRAMMING
  return 0;
}