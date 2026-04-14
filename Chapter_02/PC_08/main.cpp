/**************************************************************************************************** 
* Author: Yasin Zahir

* Total Purchase

* 4/13/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  const double SALES_TAX = 0.07;
  double item_1_price = 15.95;
  double item_2_price = 24.95;
  double item_3_price = 6.95;
  double item_4_price = 12.95;
  double item_5_price = 3.95;

  double subtotal = item_1_price + item_2_price + item_3_price + item_4_price + item_5_price;
  double total_sales_tax = subtotal * SALES_TAX;
  double total = subtotal + total_sales_tax;

  cout << "-------------- Total Purchase --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "\n";

  cout << "---- Price ----" << endl;
  cout << "Item 1 Price: $" << item_1_price << endl;
  cout << "Item 2 Price: $" << item_2_price << endl;
  cout << "Item 3 Price: $" << item_3_price << endl;
  cout << "Item 4 Price: $" << item_4_price << endl;
  cout << "Item 5 Price: $" << item_5_price << endl;
  cout << "---- Price ----" << endl;
  cout << "\n";

  cout << "---- Subtotal ----" << endl;
  cout << "Subtotal: $" << subtotal << endl;
  cout << "---- Subtotal ----" << endl;
  cout << "\n";

  cout << "---- Total Sales Tax----" << endl;
  cout << "Total Sales Tax: $" << total_sales_tax << endl;
  cout << "---- Total Sales Tax ----" << endl;
  cout << "\n";

  cout << "---- Total ----" << endl;
  cout << "Total: $" << total << endl;
  cout << "---- Total ----" << endl;
  cout << "\n";

  cout << "-------------- Total Purchase --------------" << endl;
  cout << "\n";
  return 0;
}