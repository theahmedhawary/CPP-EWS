#include <array>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
  string fName = "Elzero ";
  string mName = "Web ";
  string lName = "School";

  // Method 1
  cout << fName << mName << lName << "\n";

  // Method 2
  cout << fName + mName + lName << "\n";

  // Method 3
  cout << fName.append(mName).append(lName) << "\n";

  return 0;
}
/*
  Output Needed
  Elzero Web School
  Elzero Web School
  Elzero Web School
*/