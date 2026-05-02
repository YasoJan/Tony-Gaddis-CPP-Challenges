/**************************************************************************************************** 
* Author: Yasin Zahir

* Days in a Month

* 5/2/2026
*****************************************************************************************************/

#include <iostream>
using namespace std;

int main(){
  string banner = "--------------  Days in a Month  --------------";
  int month = 0;
  int year = 0;

  cout << banner << endl;
  do{
    cout << "Enter the month (1-12): ";
    cin >> month;
  }while(month < 1 || month > 12);

  cout << "Enter the year: ";
  cin >> year;

  if(month == 1){
    cout << "Days: 31" << endl;
  }
  else if(month == 2){
    if(((year % 100 == 0) && (year % 400 == 0)) || ((year % 100 != 0) && (year % 4 == 0))){
      cout << "LEAP YEAR" << endl;
      cout << "Days: 29" << endl;
    }
  else{
      cout << "COMMON YEAR" << endl;
      cout << "Days: 28" << endl;
    }
  }
  else if(month == 3){
    cout << "Days: 31" << endl;
  }
  else if(month == 4){
    cout << "Days: 30" << endl;
  }
  else if(month == 5){
    cout << "Days: 31" << endl;
  }
  else if(month == 6){
    cout << "Days: 30" << endl;
  }
  else if(month == 7){
    cout << "Days: 31" << endl;
  }
  else if(month == 8){
    cout << "Days: 31" << endl;
  }
  else if(month == 9){
    cout << "Days: 30" << endl;
  }
  else if(month == 10){
    cout << "Days: 31" << endl;
  }
  else if(month == 11){
    cout << "Days: 30" << endl;
  }
  else if(month == 12){
    cout << "Days: 31" << endl;
  }
  
  cout << banner << endl;

  return 0;
}