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
    int days;
  public:
    NumDays(int);
    double getHours();
    void setHours(double);
    int getDays();
    void setDays(int);
    //TODO: DEFINE OPERATOR OVERLOADING
    double operator+ (const NumDays);
};
#endif
