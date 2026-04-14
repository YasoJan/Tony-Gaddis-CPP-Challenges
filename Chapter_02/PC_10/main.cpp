/**************************************************************************************************** 
* Author: Yasin Zahir

* Miles per Gallon

* 4/14/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  const double MAX_MILES = 375.0;
  const double MAX_GAS = 15.0;
  double mpg = MAX_MILES / MAX_GAS;

  cout << "-------------- Miles per Gallon --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "Miles per gallon (MPG): " << mpg << endl;
  cout << "-------------- Miles per Gallon --------------" << endl;
}