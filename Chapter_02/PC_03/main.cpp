/**************************************************************************************************** 
* Author: Yasin Zahir

* Sales Tax

* 4/13/2026
*****************************************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  const float STATE_SALES_TAX = .04;
  const float COUNTY_SALES_TAX = .02;
  int purchase = 95;
  float total_sales_tax = (STATE_SALES_TAX + COUNTY_SALES_TAX) * purchase;
  cout << "State Sales Tax: $" << STATE_SALES_TAX << endl;
  cout << "County Sales Tax: $" << COUNTY_SALES_TAX << endl;
  cout << "Total Sales Tax: $" << total_sales_tax << endl;
  return 0;
}