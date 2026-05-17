/******************************************************************
 * Author: Yasin Zahir
 
 * Markup

 * 5/7/2026
*******************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

double calculate_retail(double wholesale_cost, double markup_percentage){
  const int PERCENT_TO_DECIMAL = 100;
  double markup_ratio = markup_percentage / PERCENT_TO_DECIMAL;
  double markup_cost = markup_ratio * wholesale_cost;
  double retail_price = markup_cost + wholesale_cost;
  return retail_price;
}

int main(){
  string banner = "--------------  Markup  --------------";
  double wholesale_cost = 0.00;
  double markup_percentage = 0.0;
  double total = 0.00;

  cout << banner << endl;
  cout << fixed << setprecision(2);

  cout << "Enter an item’s wholesale cost: ";
  cin >> wholesale_cost;

  cout << "Enter the markup percentage: ";
  cin >> markup_percentage;

  total = calculate_retail(wholesale_cost, markup_percentage);

  cout << "Total: $" << total << endl;
  cout << banner << endl;
  
  return 0;
}