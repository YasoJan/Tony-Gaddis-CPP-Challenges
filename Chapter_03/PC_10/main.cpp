/**************************************************************************************************** 
* Author: Yasin Zahir

* How Much Insurance?

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  string banner = "-------------- Insurance  --------------";
  const double INSURANCE_RATE = 0.80;
  double replacement_cost = 0.00;
  double min_insurance = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  cout << "Enter the replacement cost of a building: $";
  cin >> replacement_cost;

  min_insurance = INSURANCE_RATE * replacement_cost;
  cout << "Recommended insurance total: $" << min_insurance << endl;

  cout << banner << endl;

  return 0;
}