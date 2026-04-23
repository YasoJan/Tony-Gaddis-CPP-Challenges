/**************************************************************************************************** 
* Author: Yasin Zahir

*  Stadium Seating

* 4/22/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  const double A_PRICE = 15.00;
  const double B_PRICE = 12.00;
  const double C_PRICE = 9.00;

  int a_tickets = 0;
  int b_tickets = 0;
  int c_tickets = 0;

  string banner = "-------------- Stadium Seating  --------------";

  cout << banner << endl;
  cout << "Tickets for Class A sold: ";
  cin >> a_tickets;

  double a_total = A_PRICE * a_tickets;

  cout << "Tickets for Class B sold: ";
  cin >> b_tickets;

  double b_total = B_PRICE * b_tickets;

  cout << "Tickets for Class C sold: ";
  cin >> c_tickets;

  double c_total = C_PRICE * c_tickets;

  cout << fixed << setprecision(2);

  cout << "Total revenue for Class A: $" << a_total << endl;
  cout << "Total revenue for Class B: $" << b_total << endl;
  cout << "Total revenue for Class C: $" << c_total << endl;

  cout << banner << endl;

  return 0;

}
