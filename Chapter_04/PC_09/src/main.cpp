/**************************************************************************************************** 
* Author: Yasin Zahir

* Change for a Dollar Game

* 5/1/2026
*****************************************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "--------------  Change for a Dollar Game  --------------";
  int num_pennies = 0;
  int num_nickles = 0;
  int num_dimes = 0;
  int num_quarters = 0;

  const double QUARTERS_VALUE = .25;
  const double DIMES_VALUE = .10;
  const double NICKLES_VALUE = .05;
  const double PENNIES_VALUE = .01;
  const double DOLLAR_VALUE = 1.00;

  double total_amount = 0.00;
  double pennies_amount = 0.00;
  double nickles_amount = 0.00;
  double dimes_amount = 0.00;
  double quarters_amount = 0.00;
  
  bool is_exact_change = false;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  
  cout << "Enter the number of pennies: ";
  cin >> num_pennies;

  cout << "Enter the number of nickels: ";
  cin >> num_nickles;

  cout << "Enter the number of dimes: ";
  cin >> num_dimes;

  cout << "Enter the number of quarters: ";
  cin >> num_quarters;

  pennies_amount = num_pennies * PENNIES_VALUE;
  nickles_amount = num_nickles * NICKLES_VALUE;
  dimes_amount = num_dimes * DIMES_VALUE;
  quarters_amount = num_quarters * QUARTERS_VALUE;
  total_amount = pennies_amount + nickles_amount + dimes_amount + quarters_amount;
  is_exact_change = total_amount == DOLLAR_VALUE;

  if(is_exact_change){
    cout << "Total: $1" << endl;
    cout << "Congratulations you won the game!" << endl;
  }
  else if(total_amount < DOLLAR_VALUE){
    cout << "Total: $" << total_amount << endl;
    cout << "You lose! Amount entered was less than one dollar!" << endl;
  }
  else{
    cout << "Total: $" << total_amount << endl;
    cout << "You lose! Amount entered was more than a dollar!" << endl;
  }

  cout << banner << endl;
  return 0;
}