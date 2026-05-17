/**************************************************************************************************** 
* Author: Yasin Zahir

* NumDays Class

* 5/11/2026
*****************************************************************************************************/

#include "NumDays.h"
#include <iostream>

  NumDays::NumDays(int hours) : hours(hours){}
  double NumDays::getHours(){
    return hours;
  }
  void NumDays::setHours(double hours){
    this->days = days;
  }
  int NumDays::getDays(){
    return days;
  }
  void NumDays::setDays(int days){
    this->days = days;
  }
  //TODO: IMPLEMENT OPERATOR OVERLOADING