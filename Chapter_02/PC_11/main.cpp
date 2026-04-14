/**************************************************************************************************** 
* Author: Yasin Zahir

* Distance per Tank of Gas

* 4/14/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  // Distance = Number of Gallons x Average Miles per Gallon
  const double MAX_GAS = 20.0;
  const double CITY_MPG = 23.5;
  const double HWY_MPG = 28.9;
  double HWY_MAX_DISTANCE = HWY_MPG * MAX_GAS;
  double CITY_MAX_DISTANCE = CITY_MPG * MAX_GAS;

  // TODO: Compute the equation for max distance for hwy and city
  cout << "-------------- Distance per Tank of Gas --------------" << endl;
  cout << "Max distance for hwy: " << HWY_MAX_DISTANCE << endl;
  cout << "Max distance for city: " << CITY_MAX_DISTANCE << endl;
  cout << "-------------- Distance per Tank of Gas --------------" << endl;

  return 0;
}

