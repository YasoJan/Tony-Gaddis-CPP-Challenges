/**************************************************************************************************** 
* Author: Yasin Zahir

*  Date

* 4/28/2026
*****************************************************************************************************/

/*
1. Date
Design a class called Date. The class should store a date in three integers: month, day, and year. There should be member functions to print the date in the following forms:
12/25/2014 December 25, 2014 25 December 2014
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept values for the month greater than 12 or less than 1.
*/
#include "Date.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "--------------  Date  --------------";
  int month = 0;
  int day = 0;
  int year = 0;
  cout << banner << endl;

  do{
    cout << "Enter a month (1-12): ";
    cin >> month;
  }while(month < 1 || month > 12);

  do{
    cout << "Enter a day (1-31): ";
    cin >> day;
  }while(day < 1 || day > 31);

  cout << "Enter a year: ";
  cin >> year;

  Date date(month, day, year);

  cout << date.all_numeric() << endl;
  cout << date.month_first() << endl;
  cout << date.day_first() << endl;
  
  cout << banner << endl;

  return 0;
}