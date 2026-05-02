/**************************************************************************************************** 
* Author: Yasin Zahir

* Magic Dates

* 4/30/2026
*****************************************************************************************************/

#include <iostream>
using namespace std;

/*
Write a program that asks the user to enter a month (in numeric form), a day, and a two-digit year. 
The program should then determine whether the month times the day is equal to the year. 
If so, it should display a message saying the date is magic. Otherwise it should display a message saying the date is not magic.
*/

int main(){
  string banner =  "--------------  Magic Dates  --------------";

  int month;
  int day = 0;
  int year = 0;

  bool is_magic = false;

  cout << banner << endl;

  cout << "Enter the month: ";
  cin >> month;

  cout << "Enter the day: ";
  cin >> day;

  cout << "Enter the year: ";
  cin >> year;

  is_magic = month * day == year;

  if(is_magic){
    cout << "The date is magic!" << endl;
  }
  else{
    cout << "The date is NOT magic!" << endl;
  }
  cout << banner << endl;

  return 0;
}