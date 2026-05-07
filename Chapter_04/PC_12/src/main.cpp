/**************************************************************************************************** 
* Author: Yasin Zahir

* Software Sales

* 5/5/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Software Sales  --------------";
  const double PACKAGE_PRICE = 99.00;
  const double FIRST_DISCOUNT = .20;
  const double SECOND_DISCOUNT = .30;
  const double THIRD_DISCOUNT = .40;
  const double LAST_DISCOUNT = .50;
  int quantity = 0;
  double price_per_unit = 0.00;
  double total_price = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  do{
    cout << "Number of units sold: ";
    cin >> quantity;

  }while(quantity <= 0);

  if(quantity >= 10 && quantity <= 19){
    price_per_unit = PACKAGE_PRICE - (FIRST_DISCOUNT * PACKAGE_PRICE);
  }
  else if(quantity >= 20 && quantity <= 49){
    price_per_unit = PACKAGE_PRICE - (SECOND_DISCOUNT * PACKAGE_PRICE);
  }
  else if(quantity >= 50 && quantity <= 99){
    price_per_unit = PACKAGE_PRICE - (THIRD_DISCOUNT * PACKAGE_PRICE);
  }
  else if(quantity >= 100){
    price_per_unit = PACKAGE_PRICE - (LAST_DISCOUNT * PACKAGE_PRICE);
  }
  else{
    price_per_unit = PACKAGE_PRICE;
  }
  total_price = price_per_unit * quantity;
  cout << "Total cost of the purchase: $" << total_price << endl;
  cout << banner << endl;
  return 0;
}

