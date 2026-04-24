/**************************************************************************************************** 
* Author: Yasin Zahir

* Ingredient Adjuster

* 4/23/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  const int COOKIES_PER_BATCH = 48;

  const double SUGAR_PER_BATCH = 1.5;
  const double BUTTER_PER_BATCH = 1.0;
  const double FLOUR_PER_BATCH = 2.75;

  int total_cookies = 0;

  const double SUGAR_PER_COOKIE = SUGAR_PER_BATCH / static_cast<double> (COOKIES_PER_BATCH);
  const double BUTTER_PER_COOKIE =  BUTTER_PER_BATCH / static_cast<double> (COOKIES_PER_BATCH);
  const double FLOUR_PER_COOKIE = FLOUR_PER_BATCH / static_cast<double> (COOKIES_PER_BATCH);

  double sugar_needed = 0.0;
  double butter_needed = 0.0;
  double flour_needed = 0.0;

  string banner = "-------------- Ingredient Adjuster  --------------";

  cout << banner << endl;
  cout << fixed << setprecision(2);

  cout << "Enter amount of cookies desired: ";
  cin >> total_cookies;

  sugar_needed = total_cookies * SUGAR_PER_COOKIE;
  cout << "Cups of sugar needed: " << sugar_needed << endl;

  butter_needed = total_cookies * BUTTER_PER_COOKIE; 
  cout << "Cups of butter needed: " << butter_needed << endl;

  flour_needed = total_cookies * FLOUR_PER_COOKIE; 
  cout << "Cups of flour needed: " << flour_needed << endl;

  cout << banner << endl;

  return 0;
}