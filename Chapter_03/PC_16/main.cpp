/**************************************************************************************************** 
* Author: Yasin Zahir

* Senior Citizen Property Tax

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Senior Citizen Property Tax  --------------";

  const double ASSESSMENT_RATE = 0.6;

  const double SENIOR_HOMEOWNER_EXEMPTION = 5000.00;
  const double PER_HUNDRED_ASSESSED_VALUE = 100.00; 
  const int INSTALLMENTS = 4;

  double actual_value = 0.00;
  double tax_rate = 0.0;
  double assessment_value = 0.00;
  double taxable_value = 0.00;
  double tax_ratio = 0.0;
  double annual_tax = 0.00;
  double quarterly_installments = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);

  cout << "Input the actual value of a piece of property: $";
  cin >> actual_value;

  cout << "Input the current tax rate for each $100 of assessed value: $";
  cin >> tax_rate;

  cout << "--------------" << endl;

  assessment_value = ASSESSMENT_RATE * actual_value;
  taxable_value = assessment_value - SENIOR_HOMEOWNER_EXEMPTION;
  tax_ratio = tax_rate / PER_HUNDRED_ASSESSED_VALUE;
  annual_tax = tax_ratio * taxable_value;

  cout << "Annual property tax: $" << annual_tax << endl;

  quarterly_installments = annual_tax / INSTALLMENTS;

  cout << "Quarterly tax bill: $" << quarterly_installments << endl;

  cout << banner << endl;

  return 0;
}

