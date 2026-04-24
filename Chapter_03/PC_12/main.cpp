/**************************************************************************************************** 
* Author: Yasin Zahir

* Celsius to Fahrenheit

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  const double FAHRENHEIT_SCALE_FACTOR = 9.0/5.0;
  const int FAHRENHEIT_FREEZING_OFFSET = 32;
  string banner = "-------------- Celsius to Fahrenheit  --------------";
  double celsius = 0.0;

  
  cout << banner << endl;
  cout << fixed << setprecision(1);
  cout << "Enter temperature in celsius: ";
  cin >> celsius;

  double fahrenheit = FAHRENHEIT_SCALE_FACTOR * celsius + FAHRENHEIT_FREEZING_OFFSET;

  cout << "Temperature in Fahrenheit: " << fahrenheit << endl;

  cout << banner << endl;

  return 0;
}