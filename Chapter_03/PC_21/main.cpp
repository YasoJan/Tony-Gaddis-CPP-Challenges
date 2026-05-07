/**************************************************************************************************** 
* Author: Yasin Zahir

* How Many Pizzas?

* 4/28/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  string banner =  "--------------  How Many Pizzas?  --------------";

  const double PI = M_PI;
  const double SLICE_AREA = 14.125;
  
  const int SLICE_PER_PERSON = 4;

  double diameter = 0.0;
  double radius = 0.0;
  double area = 0.0;

  int num_slices = 0;
  int people_at_party = 0;
  int num_pizzas = 0;

  cout << banner << endl;

  cout << "Number of people who will be at the party: ";
  cin >> people_at_party;

  cout << "Diameter of the pizza in inches: ";
  cin >> diameter;

  radius = diameter/2;
  area = PI * pow((radius), 2);
  num_slices = static_cast<int>(area / SLICE_AREA);

  cout << "Number of slices that may be taken from a pizza of that size: " << num_slices << endl;
  
  num_pizzas = static_cast<double>(ceil(people_at_party * SLICE_PER_PERSON)) / num_slices;

  cout << "Number of pizzas to purchase: " << num_pizzas << endl;
  
  cout << banner << endl;
  return 0;
}