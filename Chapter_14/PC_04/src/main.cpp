/**************************************************************************************************** 
* Author: Yasin Zahir

* NumDays Class

* 5/19/2026
*****************************************************************************************************/
#include "NumDays.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "----------  NumDays ----------";

  int hours1 = 0;
  int hours2 = 0;

  cout << banner << endl;

  cout << "Enter number of hours worked for employee #1: ";
  cin >> hours1;

  NumDays employee1(hours1);

  cout << "Enter number of hours worked for employee #2: ";
  cin >> hours2;

  NumDays employee2(hours2);

  cout << "Total days worked employee 1: " << employee1.get_days() << endl;
  cout << "Total days worked employee 2: " << employee2.get_days() << endl;

  NumDays total(employee1 + employee2);

  cout << "Total days worked among both employees: " << total.get_days() << endl;
  cout << banner << endl;

  return 0;
}