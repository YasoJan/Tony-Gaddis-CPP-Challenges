/**************************************************************************************************** 
* Author: Yasin Zahir

* Bank Charges

* 5/12/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Bank Charges  --------------";

  const double MONTHLY_FEE = 10.00;
  const double CRITICAL_BALANCE_FEE = 15.00;
  const double FIRST_TIER_CHECKS = .10;
  const double SECOND_TIER_CHECKS = .08;
  const double THIRD_TIER_CHECKS = .06;
  const double FOURTH_TIER_CHECKS = .04;

  double beginning_balance = 0.00;
  double check_charges = 0.00;
  double final_charge = MONTHLY_FEE;

  int num_checks = 0;

  cout << banner << endl;
  cout << fixed << setprecision(2);

  cout << "Beginning balance: ";
  cin >> beginning_balance;

  if(beginning_balance < 400){
    if(beginning_balance < 0){
      cout << "URGENT! The account is overdrawn!" << endl;
    }
    final_charge += CRITICAL_BALANCE_FEE;
  }

  do{
    cout << "Number of checks written: ";
    cin >> num_checks;
  }while(num_checks < 0);

  if(num_checks < 20){
    check_charges = num_checks * FIRST_TIER_CHECKS;
  }
  else if(num_checks >= 20 && num_checks <= 39){
    check_charges = num_checks * SECOND_TIER_CHECKS;
  }
  else if(num_checks >= 40 && num_checks <= 59){
    check_charges = num_checks * THIRD_TIER_CHECKS;
  }
  else{
    check_charges = num_checks * FOURTH_TIER_CHECKS;
  }
  final_charge+= check_charges;

  cout << "Bank service fees for the month: $" << final_charge << endl;
  cout << banner << endl;

  return 0;
}