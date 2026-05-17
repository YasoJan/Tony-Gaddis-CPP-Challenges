/**************************************************************************************************** 
* Author: Yasin Zahir

* Shipping Charges

* 5/13/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
  string banner = "-------------- Shipping Charges  --------------";

  const double FIRST_TIER_RATE = 1.10;
  const double SECOND_TIER_RATE = 2.20;
  const double THIRD_TIER_RATE = 3.70;
  const double FOURTH_TIER_RATE = 4.80;
  const double RATE = 500.0;

  double package_weight = 0.0;
  double total = 0.00;
  double per_500_miles = 0.0;

  int miles_shipped = 0;

  cout << banner << endl;
  cout << fixed << setprecision(2);

  do{
    cout << "Enter weight of the package: ";
    cin >> package_weight;
    if(package_weight <=0){
      cout << "ERROR! Cannot accept values of 0 or less for the weight of the package." << endl;
    }
    else if(package_weight > 20){
      cout << "ERROR! Cannot accept values of more than 20 for the weight of the package." << endl;
    }
  } while(package_weight <= 0 || package_weight > 20);

  do
  {
   cout << "Enter the distance it is to be shipped: ";
    cin >> miles_shipped;
  } while (miles_shipped < 10 || miles_shipped > 3000);
  
  per_500_miles = ceil((miles_shipped / RATE));

  if(package_weight <= 2){
    total = FIRST_TIER_RATE * per_500_miles;
  }
  else if(package_weight > 2 && package_weight <=6){
    total = SECOND_TIER_RATE * per_500_miles;
  }
  else if(package_weight > 6 && package_weight <=10){
    total = THIRD_TIER_RATE * per_500_miles;
  }
  else if(package_weight > 10 && package_weight <=20){
    total = FOURTH_TIER_RATE * per_500_miles;
  }

  cout << "Weight: " << package_weight << endl;
  cout << "Distance: " << miles_shipped << endl;
  cout << "Total: $" << total << endl;
  
  cout << banner << endl;
  return 0;
}