/**************************************************************************************************** 
* Author: Yasin Zahir

* Annual Pay

* 4/13/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  double pay_amount = 2200.0;
  const int PAY_PERIODS = 26;
  int annual_pay = pay_amount * PAY_PERIODS;

  cout << "-------------- Annual Pay --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "Total annual pay: $" << annual_pay << endl;
  cout << "-------------- Annual Pay --------------" << endl;
  return 0;
}