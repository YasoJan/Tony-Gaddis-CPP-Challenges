/**************************************************************************************************** 
* Author: Yasin Zahir

* Interest Earned

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
  string banner =  "-------------- Interest Earned  --------------";

  int times_compounded = 0;

  double principal = 0.00;
  double interest_rate = 0.0;
  double savings = 0.00;
  double interest = 0.00;
  double ir_decimal = 0.0;
  
  cout << banner << endl;

  cout << "Principal: $";
  cin >> principal;

  cout << "Interest rate: ";
  cin >> interest_rate;

  cout << "Times Compounded: ";
  cin >> times_compounded;

  ir_decimal = interest_rate / 100;
  savings = principal * pow((1 + (ir_decimal / times_compounded)) , times_compounded);
  interest = savings - principal;

  /******************************************* COMPUTATIONS **********************************************************/
  cout << "--------------" << endl;
  cout << fixed << setprecision(2);
  cout << "Interest Rate: " << interest_rate << "%" << endl;
  cout << "Times Compounded: " << times_compounded << endl;
  cout << "Principal: $" << principal << endl;
  cout << "Interest: $" << interest << endl;
  cout << "Amount in Savings: $" << savings << endl;
  cout << banner << endl;
  return 0;
}