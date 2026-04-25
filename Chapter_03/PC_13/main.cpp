/**************************************************************************************************** 
* Author: Yasin Zahir

* Currency

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Currency  --------------";

  const double YEN_PER_DOLLAR = 159.00;
  const double EUROS_PER_DOLLAR = 0.85;

  double usd = 0.00;
  double jpy = 0.00;
  double eur = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);

  cout << "Enter USD: $";
  cin >> usd;

  jpy = usd * YEN_PER_DOLLAR;
  cout << "Yen: ¥" << jpy << endl;

  eur = usd * EUROS_PER_DOLLAR;
  cout << "Euro(s): €" << eur << endl;

  cout << banner << endl;
  return 0;
}