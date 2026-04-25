/**************************************************************************************************** 
* Author: Yasin Zahir

* Property Tax

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Property Tax  --------------";
  const double ASSESSMENT_RATE = 0.6;
  const int PROPERTY_TAX_DENOMINATOR = 100;
  const double PROPERTY_TAX_PER_HUNDRED = 0.75;

  const double PROPERTY_TAX_RATE = PROPERTY_TAX_PER_HUNDRED / PROPERTY_TAX_DENOMINATOR;

  double actual_value = 0.00;
  double assessment_value = 0.00;
  double property_tax = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);

  cout << "Enter actual value of a piece of property: $";
  cin >> actual_value;

  assessment_value = ASSESSMENT_RATE * actual_value;
  cout << "Assessment Value: $" << assessment_value << endl;

  property_tax = PROPERTY_TAX_RATE * assessment_value;
  cout << "Property Tax: $" << property_tax << endl;

  cout << banner << endl;
  return 0;
}