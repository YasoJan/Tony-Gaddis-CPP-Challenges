/**************************************************************************************************** 
* Author: Yasin Zahir

* How Many Widgets?

* 4/23/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  const double WIDGET_WEIGHT = 12.5;

  double pallet_weight = 0.0;
  double total_weight = 0.0;

  int num_widgets = 0;

  string banner = "-------------- Widgets  --------------";

  cout << banner << endl;
  
  cout << "Pallet weight (in lbs): ";
  cin >> pallet_weight;

  cout << "Total weight with widgets (in lbs): ";
  cin >> total_weight;

  num_widgets = static_cast<int>((total_weight - pallet_weight) / WIDGET_WEIGHT);
  cout << "Number of widgets: " << num_widgets << endl;

  cout << banner << endl;
  return 0;
}