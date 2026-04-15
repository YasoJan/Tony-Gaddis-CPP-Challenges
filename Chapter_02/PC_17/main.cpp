/**************************************************************************************************** 
* Author: Yasin Zahir

* Stock Commission

* 4/14/2026
*****************************************************************************************************/


#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  const double SHARES_BOUGHT = 750.0;
  const double PRICE_PER_SHARE = 35.00;
  const double COMMISSION = .02;
  double share_total = SHARES_BOUGHT * PRICE_PER_SHARE;
  double share_commission = COMMISSION * share_total;
  double total = share_total + share_commission;


  cout << "-------------- Stock Commission --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "Stock alone: $" << share_total << endl;
  cout << "Commission: $" << share_commission << endl;
  cout << "Total amount: $" << total << endl;
  cout << "-------------- Stock Commission --------------" << endl;

  return 0;
}