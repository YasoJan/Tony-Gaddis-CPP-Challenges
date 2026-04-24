/**************************************************************************************************** 
* Author: Yasin Zahir

* Monthly Sales Tax

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Monthly Sales Tax  --------------";
  string month;
  string year;

  const double STATE_SALES_TAX = 0.04;
  const double COUNTY_SALES_TAX = 0.02;
  const double TOTAL_SALES_TAX = COUNTY_SALES_TAX + STATE_SALES_TAX;
  const double PRODUCT_SALES_DENOMINATOR = 1.0 + TOTAL_SALES_TAX;

  double product_sales = 0.00;
  double total_collected = 0.00;
  double county_sales_tax = 0.00;
  double state_sales_tax = 0.00;
  double total_sales_tax = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  cout << "Enter the month: "; 
  cin >> month;

  cout << "Enter the year: ";
  cin >> year;

  cout << "Enter total collected (sales + sales tax): $";
  cin >> total_collected;

  cout << "Month: " << month << endl;
  cout << "--------------" << endl;
  cout << "Total Collected: " << setw(10) << "$ " << total_collected << endl;

  product_sales = total_collected / PRODUCT_SALES_DENOMINATOR;

  cout << "Sales: " << setw(20) << "$ " << product_sales << endl;

  county_sales_tax = product_sales * COUNTY_SALES_TAX;
  cout << "County Sales Tax: " << setw(9) << "$ " << county_sales_tax << endl;

  state_sales_tax = product_sales * STATE_SALES_TAX;
  cout << "State Sales Tax: " << setw(10) << "$ " << state_sales_tax << endl;

  total_sales_tax = product_sales * TOTAL_SALES_TAX;
  cout << "Total Sales Tax: " << setw(10) << "$ " << total_sales_tax << endl;

  cout << banner << endl;
  return 0;
}
