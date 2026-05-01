/**************************************************************************************************** 
* Author: Yasin Zahir

*  Pizza Pi

* 4/28/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  string banner =  "--------------  Pizza Pi  --------------";

  const double PI = M_PI;
  const double SLICE_AREA = 14.125;

  double diameter = 0.0;
  double radius = 0.0;
  double area = 0.0;

  int num_slices = 0;

  cout << banner << endl;
  cout << "Diameter of the pizza in inches: ";
  cin >> diameter;

  radius = diameter/2;
  area = PI * pow((radius), 2);
  num_slices = static_cast<int>(area / SLICE_AREA);
  cout << "Number of slices that may be taken from a pizza of that size: " << num_slices << endl;
  
  cout << banner << endl;
  return 0;
}