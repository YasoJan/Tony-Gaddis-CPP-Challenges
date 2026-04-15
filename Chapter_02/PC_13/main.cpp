/**************************************************************************************************** 
* Author: Yasin Zahir

* Circuit Board Price

* 4/14/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  const double PERCENT_PROFIT = 0.35;
  double cb_cost = 14.95;
  double cb_price = cb_cost + (PERCENT_PROFIT * cb_cost);
  cout << "-------------- Circuit Board Price --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "Selling price of a circuit board that costs $14.95: $" << cb_price << "." << endl;
  cout << "-------------- Circuit Board Price --------------" << endl;
  return 0;
}