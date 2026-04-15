/**************************************************************************************************** 
* Author: Yasin Zahir

* Land Calculation

* 4/14/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  const double ACRE_SQFT = 43560.0;
  double custom_tract_sqft = 391876.0; 
  double custom_tract_acres = custom_tract_sqft / ACRE_SQFT;

  cout << "-------------- Land Calculation --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "Number of acres in a tract of land with 391,876 square feet: " << custom_tract_acres << " acres." << endl;
  cout << "-------------- Land Calculation --------------" << endl;
  return 0;
  
}