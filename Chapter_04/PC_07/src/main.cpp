/**************************************************************************************************** 
* Author: Yasin Zahir

* Time Calculator

* 5/1/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner =  "--------------  Time Calculator  --------------";
  int num_seconds = 0;
  int num_mins = 0;
  int num_hours = 0;
  int num_days = 0;

  const int SECONDS_IN_MINS = 60;
  const int SECONDS_IN_HOUR = 3600;
  const int SECONDS_IN_DAY = 86400;

  cout << banner << endl;

  cout << "Enter a number of seconds: ";
  cin >> num_seconds;

  num_hours = num_seconds / SECONDS_IN_HOUR;
  num_days = num_seconds  / SECONDS_IN_DAY;
  num_mins = num_seconds  / SECONDS_IN_MINS;

  if(num_seconds >= SECONDS_IN_MINS){
    cout << "Minutes: " << num_mins << endl;
  }
  if(num_seconds >= SECONDS_IN_HOUR){
    cout << "Hours: " << num_hours << endl;
  }
  if(num_seconds >= SECONDS_IN_DAY){
    cout << "Days: " << num_days << endl;
  }

  cout << banner << endl;

  return 0;
}