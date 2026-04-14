/**************************************************************************************************** 
* Author: Yasin Zahir

* Sales Prediction

* 4/13/2026
*****************************************************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  const double EC_DIVISION_RATE = 0.58; 
  int total_profit = 8600000;
  double ec_total_sales = EC_DIVISION_RATE * total_profit;
  cout << "East Coast Total Sales: " << ec_total_sales << endl;
  return 0;
}