/**************************************************************************************************** 
* Author: Yasin Zahir

* Stock Transaction Program

* 5/1/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Stock Transaction Program --------------";
  const int SHARES_PURCHASED= 1000;
  const double PER_SHARE_PURCHASE = 45.50;
  double stock_purchase_amount = PER_SHARE_PURCHASE * SHARES_PURCHASED;
  const double STOCKBROKER_COMMISSION_RATIO = .02;
  double stockbroker_commission_purchase = STOCKBROKER_COMMISSION_RATIO * stock_purchase_amount;
  // Two weeks later Joe sold the stock
  const int SHARES_SOLD = 1000;
  const double PER_SHARE_SALE = 56.90;
  double stock_sale_amount = PER_SHARE_SALE * SHARES_SOLD;
  double stockbroker_commission_sale = STOCKBROKER_COMMISSION_RATIO * stock_sale_amount;
  // total profit
  double gross_gain = stock_sale_amount - stock_purchase_amount;
  double total_commission = stockbroker_commission_purchase + stockbroker_commission_sale;
  double profit = gross_gain - total_commission;
  /**************COMPUTATIONS***************/
  cout << banner << endl;
  cout << fixed << setprecision(2);
  cout << "Money Joe paid for the stock: $" << stock_purchase_amount << endl;
  cout << "Commission Joe paid his broker when he bought the stock: $" << stockbroker_commission_purchase << endl;
  cout << "Amount that Joe sold the stock for: $" << stock_sale_amount << endl;
  cout << "Amount of commission Joe paid his broker when he sold the stock: $" << stockbroker_commission_sale << endl;
  cout << "Profit that Joe made after selling his stock and paying the two commissions to his broker: $" << profit << endl;
  cout << banner << endl;
  return 0;
}