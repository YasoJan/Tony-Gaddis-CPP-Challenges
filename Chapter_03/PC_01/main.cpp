/**************************************************************************************************** 
* Author: Yasin Zahir

*  Miles per Gallon

* 4/22/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;
using std::fixed;

int main(){
  double full_tank_gallons;
  double full_tank_miles;

  cout << "-------------- Miles per Gallon  --------------"<< endl;
  cout << "Enter the number of gallons of gas the car can hold: ";
  cin >> full_tank_gallons;

  cout << "Enter the number of miles it can be driven on a full tank: ";
  cin >> full_tank_miles;

  double miles_per_gallon = full_tank_miles / full_tank_gallons;
  cout << fixed << setprecision(2);
  cout << "The number of miles that may be driven per gallon of gas: " << miles_per_gallon << endl;

  cout << "-------------- Miles per Gallon  --------------"<< endl;
  return 0;
}