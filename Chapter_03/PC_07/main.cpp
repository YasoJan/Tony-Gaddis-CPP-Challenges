/**************************************************************************************************** 
* Author: Yasin Zahir

* Box Office

* 4/23/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  const double ADULT_PRICE = 10.00;
  const double CHILD_PRICE = 6.00;
  const double THEATER_CUT = 0.20;
  const double DISTRIBUTOR_CUT = 0.80;

  double gross_price = 0.0;
  double theater_profit = 0.0;
  double distributor_profit = 0.0;

  int adult_tickets = 0;
  int child_tickets = 0;

  string banner = "-------------- Box Office  --------------";
  string movie_name;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  
  cout << "Movie Name: ";
  getline(cin, movie_name);

  cout << "Adult Tickets Sold: ";
  cin >> adult_tickets;

  cout << "Child Tickets Sold: ";
  cin >> child_tickets;

  cout << "Movie Name: " << movie_name << endl;
  
  gross_price = (ADULT_PRICE * adult_tickets) + (CHILD_PRICE * child_tickets);
  cout << "Gross Box Office Profit: $" << gross_price << endl;

  theater_profit = THEATER_CUT * gross_price;
  cout << "Net Box Office Profit: $" << theater_profit << endl;

  distributor_profit = DISTRIBUTOR_CUT * gross_price;
  cout << "Amount Paid to Distributor: $" << distributor_profit << endl;
  cout << banner << endl;

  return 0;
}