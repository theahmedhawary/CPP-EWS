#include <iostream>
using namespace std;

// Write Your Function Here
string greeting(string name, string gender = "")
{
  string result = "Hello ";
  if (gender == "Male")
  {
    result += "Mr " + name;
  }
  else if (gender == "Female")
  {
    result += "Miss " + name;
  }
  else
  {
    result += name;
  }
  return result;
}

int main()
{
  cout << greeting("Osama", "Male") << "\n";  // Hello Mr Osama
  cout << greeting("Eman", "Female") << "\n"; // Hello Miss Eman
  cout << greeting("Sameh") << "\n";          // Hello Sameh
  return 0;
}