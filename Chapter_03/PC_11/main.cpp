/**************************************************************************************************** 
* Author: Yasin Zahir

* Automobile Costs

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Automobile Costs  --------------";

  const int MONTHS_PER_YEAR = 12;

  double loan_payment = 0.00;
  double insurance = 0.00;
  double gas = 0.00;
  double oil = 0.00;
  double tires = 0.00;
  double maintenance = 0.00;
  double monthly_cost = 0.00;
  double annual_cost = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);

  cout << "Monthly Loan Payment: $";
  cin >> loan_payment;

  cout << "Monthly Insurance: $";
  cin >> insurance;
  
  cout << "Monthly Gas: $";
  cin >> gas;

  cout << "Monthly Oil: $";
  cin >> oil;

  cout << "Monthly Tires: $";
  cin >> tires;

  cout << "Monthly Maintenance: $";
  cin >> maintenance;

  monthly_cost = loan_payment + insurance + gas + oil + tires + maintenance; 
  cout << "Monthly Cost: $" << monthly_cost << endl;

  annual_cost = monthly_cost * MONTHS_PER_YEAR;
  cout << "Annual Cost: $" << annual_cost << endl;

  cout << banner << endl;

  return 0;
}