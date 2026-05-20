/**************************************************************************************************** 
* Author: Yasin Zahir

* NumDays Class

* 5/11/2026
*****************************************************************************************************/
 
#ifndef NUM_DAYS_H
#define NUM_DAYS_H
#include <iostream>

class NumDays{
  private:
    double hours;
    double days;
  public:
    NumDays(double);
    double get_hours();
    void set_hours(double);
    double get_days();
    void set_days(double);
    void calculate_days();
    //TODO: DEFINE OPERATOR OVERLOADING
    double operator+ (const NumDays &);
    double operator- (const NumDays &);
    double operator++ ();
    double operator--();

};
#endif
