/**************************************************************************************************** 
* Author: Yasin Zahir

* How Many Calories?

* 4/23/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  string banner = "-------------- Calories  --------------";

  const int BAG_COOKIES = 30;
  const int SERVINGS = 10;
  const int SERVING_CALORIES = 300;
  const double COOKIE_CALS = static_cast<double>((SERVINGS * SERVING_CALORIES)) / BAG_COOKIES; 

  int cookies_eaten = 0;
  double total_cals = 0.0;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  cout << "Cookies Eaten: ";
  cin >> cookies_eaten;

  total_cals = cookies_eaten * COOKIE_CALS;
  cout << "Calories Consumed: " << total_cals << " cals" << endl;
  
  cout << banner << endl;
  return 0;
}