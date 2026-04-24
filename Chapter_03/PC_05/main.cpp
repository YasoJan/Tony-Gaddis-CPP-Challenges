/**************************************************************************************************** 
* Author: Yasin Zahir

* Male and Female Percentages

* 4/23/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Male and Female Percentages  --------------";
  int num_males = 0, num_females = 0, total = 0;
  double percent_males = 0.0, percent_females = 0.0;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  cout << "Enter number of males: ";
  cin >> num_males;

  cout << "Enter number of females: ";
  cin >> num_females;

  total = num_males + num_females;
  percent_males = (static_cast <double>(num_males) / static_cast <double>(total)) * 100.0;
  percent_females = (static_cast <double>(num_females) / static_cast <double>(total)) * 100.0;

  cout << "Percentage of males: " << percent_males << "%" << endl;
  cout << "Percentage of females: " << percent_females << "%" << endl;

  cout << banner << endl;

  return 0;
}