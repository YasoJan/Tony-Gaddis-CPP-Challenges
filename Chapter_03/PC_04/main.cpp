/**************************************************************************************************** 
* Author: Yasin Zahir

* Average Rainfall

* 4/23/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string month_1 = "", month_2 = "", month_3 = "";
  double rain_1 = 0.0, rain_2 = 0.0, rain_3 = 0.0, average = 0.0;
  string banner = "-------------- Average Rainfall  --------------";
  

  cout << banner << endl;
  cout << fixed << setprecision(2);
  cout << "Enter the name of month #1: ";
  cin >> month_1;

  cout << "Enter the amount of rain (in inches) that fell in " << month_1 << ": ";
  cin >> rain_1;

  cout << "Enter the name of month #2: ";
  cin >> month_2;

  cout << "Enter the amount of rain (in inches) that fell in " << month_2 << ": ";
  cin >> rain_2;

  cout << "Enter the name of month #3: ";
  cin >> month_3;

  cout << "Enter the amount of rain (in inches) that fell in " << month_3 << ": ";
  cin >> rain_3;

  average = (rain_1 + rain_2 + rain_3) / 3.0;
  cout << "The average rainfall for " << month_1 << ", " << month_2 << ", and " << month_3 << " is: " << average << " inches." << endl;
  cout << banner << endl;
  
  return 0;
}