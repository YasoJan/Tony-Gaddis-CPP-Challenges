/**************************************************************************************************** 
* Author: Yasin Zahir

* Ocean Levels

* 4/13/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  const double RISE_PER_YEAR = 1.5;
  double rise_5 = RISE_PER_YEAR * 5.0;
  double rise_7 = RISE_PER_YEAR * 7.0;
  double rise_10 = RISE_PER_YEAR * 10.0;

  cout << "-------------- Ocean Levels --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "5 years: " << rise_5 << " millimeters." << endl;
  cout << "7 years: " << rise_7 << " millimeters." << endl;
  cout << "10 years: " << rise_10 << " millimeters." << endl;
  cout << "-------------- Ocean Levels --------------" << endl;
  return 0;
}