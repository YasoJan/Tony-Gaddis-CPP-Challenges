/**************************************************************************************************** 
* Author: Yasin Zahir

* Energy Drink Consumption

* 4/14/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main(){
  const int TOTAL_CUSTOMERS = 16500;
  const double PERCENT_RETURN = 0.15;
  const double CITRUS_PREFERENCE = 0.58;
  int weekly_buyers = TOTAL_CUSTOMERS * PERCENT_RETURN;
  int citrus_buyers = weekly_buyers * CITRUS_PREFERENCE;

  cout << "-------------- Energy Drink Consumption --------------" << endl;
  cout << "Customers who purchase one or more energy drinks per week: " << weekly_buyers << endl;
  cout << "Customers who prefer citrus-flavored energy drinks: " << citrus_buyers << endl;
  cout << "-------------- Energy Drink Consumption --------------" << endl;

  return 0;
}