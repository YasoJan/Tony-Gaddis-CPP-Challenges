/**************************************************************************************************** 
* Author: Yasin Zahir

* Average of Values

* 4/13/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

int main(){
  int num_1 = 28;
  int num_2 = 32;
  int num_3 = 37;
  int num_4 = 24;
  int num_5 = 33;
  int sum = num_1 + num_2 + num_3 + num_4 + num_5;
  double average = sum / 5.0;

  cout << "-------------- Average of Values --------------" << endl;
  cout << fixed << setprecision(2);
  cout << "Average: " << average << endl;
  cout << "-------------- Average of Values --------------" << endl;

  return 0;
}