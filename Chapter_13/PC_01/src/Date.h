/**************************************************************************************************** 
* Author: Yasin Zahir

*  Date

* 5/10/2026
*****************************************************************************************************/

#ifndef DATE_H
#define DATE_H
#include <string>
#include <iostream>

class Date{
  private:
    int month;
    int day;
    int year;
  public:
    Date(int, int, int);
    std::string all_numeric();
    std::string month_to_string();
    std::string month_first();
    std::string day_first();
};
#endif


/*
1. Date
Design a class called Date. The class should store a date in three integers: month, day, and year. There should be member functions to print the date in the following forms:
12/25/2014 December 25, 2014 25 December 2014
Demonstrate the class by writing a complete program implementing it.
Input Validation: Do not accept values for the day greater than 31 or less than 1. Do not accept values for the month greater than 12 or less than 1.
*/