/**************************************************************************************************** 
* Author: Yasin Zahir

* Restaurant Bill

* 4/13/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  double meal_charge = 88.67;
  double tax = 0.0675 * meal_charge;
  double tip = .20 * (tax + meal_charge);
  double total = meal_charge + tax + tip;

  cout << "-------------- Restaurant Bill --------------" << endl;  
  cout << fixed << setprecision(2);
  cout << "Meal Cost: $" << meal_charge << endl;
  cout << "Tax Amount: $" << tax << endl;
  cout << "Tip Amount: $" << tip << endl;
  cout << "Total Bill: $" << total << endl;
  cout << "-------------- Restaurant Bill --------------" << endl;
  return 0;
}
