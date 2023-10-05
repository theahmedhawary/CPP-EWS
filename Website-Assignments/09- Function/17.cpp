#include <iostream>
using namespace std;

// Write Your Function Here
int pricing(int phones, int used, int price, int VATs)
{
  int newPhone = phones - used;         // 50 - 10 = 40
  int newprice = newPhone * price;      // 40 * 800 = 32000

  int usedprice = used * (price - 200); // 10 * (800 - 200) = 6000

  int priceNoTax = newprice + usedprice; // 32000 + 6000 = 38000

  int priceTax = priceNoTax * VATs / 100; // 38000 * 20 / 100 = 7600

  return priceNoTax - priceTax;
}

int main()
{
  cout << pricing(50, 10, 800, 20) << "\n"; // 30400
  return 0;
}