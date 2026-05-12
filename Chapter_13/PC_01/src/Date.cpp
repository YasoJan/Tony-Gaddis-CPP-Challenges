/**************************************************************************************************** 
* Author: Yasin Zahir

* Date

* 5/9/2026
*****************************************************************************************************/
#include "Date.h"
#include <string>
using namespace std;

  Date::Date(int m, int d, int y) : month(m), day(d), year(y){}
  string Date::all_numeric(){
    string format;
    string string_month = to_string(month);
    string string_day = to_string(day);
    string string_year = to_string(year);

    if(month < 10){
      format+="0" + string_month + "/";
    }
    else{
      format+=string_month + "/";
    }
    if(day <10){
      format+="0" + string_day + "/";
    }
    else{
      format+=string_day + "/";
    }
    format+= string_year;
    return format;
  }
  string Date::month_to_string(){
    string string_month; 
    if(month == 1){
      string_month = "January";
    }
    else if(month == 2){
      string_month = "February";
    }
    else if(month == 3){
      string_month = "March";
    }
    else if(month == 4){
      string_month = "April";
    }
    else if(month == 5){
      string_month = "May";
    }
    else if(month == 6){
      string_month = "June";
    }
    else if(month == 7){
      string_month = "July";
    }
    else if(month == 8){
      string_month = "August";
    }
    else if(month == 9){
      string_month = "September";
    }
    else if(month == 10){
      string_month = "October";
    }
    else if(month == 11){
      string_month = "November";
    }
    else if(month == 12){
      string_month = "December";
    }
    else{
      string_month = "NaN";
    }
    return string_month;
  }
  string Date::month_first(){
    string string_month = Date::month_to_string();
    string format = string_month + " " + to_string(day) + ", " + to_string(year);
    return format;
  }

  string Date::day_first(){
    string string_month = Date::month_to_string();
    string string_day = to_string(day);
    string string_year = to_string(year);
    string format;

    format = string_day + " " + string_month + " " + string_year;
    return format;
  }