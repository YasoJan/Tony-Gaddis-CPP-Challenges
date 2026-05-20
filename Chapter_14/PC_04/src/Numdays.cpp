/**************************************************************************************************** 
* Author: Yasin Zahir

* NumDays Class

* 5/11/2026
*****************************************************************************************************/

#include "NumDays.h"
#include <iostream>

  NumDays::NumDays(double hours) : hours(hours){}
  double NumDays::get_hours(){
    return hours;
  }
  void NumDays::set_hours(double h){
    hours = h;
    NumDays::calculate_days();
}
  double NumDays::get_days(){
    calculate_days();
    return days;
  }
  void NumDays::set_days(double d){
    days = d;
  }
  //TODO: IMPLEMENT OPERATOR OVERLOADING

  double NumDays::operator+(const NumDays &right){
    return this->hours + right.hours;
  }
  /*
   Addition operator. 
   When two NumDays objects are added together, the over- loaded + operator should return the sum of the two objects’ hours members.
  */

  double NumDays::operator-(const NumDays &right){
    return this->hours - right.hours;
  }

  /*
  Subtraction operator. When one NumDays object is subtracted from another, 
  the overloaded − operator should return the difference of the two objects’ hours members.
  */

  double NumDays::operator++(){
    double h = hours + 1.0;
    NumDays::set_hours(h);
    return h;
  }

  /*
  Prefix and postfix increment operators. These operators should increment the number of hours stored in the object. 
  When incremented, the number of days should be automatically recalculated.
  */

  double NumDays::operator--(){
   double h = hours - 1.0;
    NumDays::set_hours(h);
    return h;
  }
  /*
  Prefix and postfix decrement operators. These operators should decrement the number of hours stored in the object. 
  When decremented, the number of days should be automatically recalculated.
  */

  void NumDays::calculate_days(){
    NumDays::set_days(this->hours / 8.0);
  }


