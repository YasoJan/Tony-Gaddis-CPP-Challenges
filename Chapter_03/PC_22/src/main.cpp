/**************************************************************************************************** 
* Author: Yasin Zahir

* Angle Calculator

* 4/28/2026
*****************************************************************************************************/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  string banner =  "--------------  Angle Calculator  --------------";

  double radians = 0.0;
  double sin_angle = 0.0;
  double cos_angle = 0.0;
  double tan_angle = 0.0;

  cout << banner << endl;
  
  cout << fixed << setprecision(4);

  cout << "Enter an angle, entered in radians: ";
  cin >> radians;

  sin_angle = sin(radians);
  cos_angle = cos(radians);
  tan_angle = tan(radians);

  cout << "Sin: " << sin_angle << endl;

  cout << "Cos: " << cos_angle << endl;

  cout << "Tan: " << tan_angle << endl;

  cout << banner << endl;

  return 0;
}