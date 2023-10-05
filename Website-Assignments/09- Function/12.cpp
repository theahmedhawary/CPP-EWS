#include <iostream>
using namespace std;

// Write Your Function Here
string createurl(string protocol, string webName, string domain, bool check = true)
{
  string result = "";
  if (check == 1)
  {
    result = protocol + "://www." + webName + "." + domain;
  }
  else
  {
    result = protocol + "://" + webName + "." + domain;
  }
  return result;
}

int main()
{
  cout << createurl("https", "elzero", "org") << "\n";        // https://www.elzero.org
  cout << createurl("https", "google", "com", false) << "\n"; // https://google.com
  cout << createurl("http", "learn", "net") << "\n";          // http://www.learn.net
  return 0;
}