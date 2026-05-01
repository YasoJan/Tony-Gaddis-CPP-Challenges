/**************************************************************************************************** 
* Author: Yasin Zahir

* Body Mass Index

* 4/30/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;



int main(){
  string banner =  "--------------  Body Mass Index  --------------";
  double bmi = 0.0;
  double height = 0.0;
  double weight = 0.0;

  cout << banner << endl;
  cout << fixed << setprecision(1);

  cout << "Enter your weight in lbs: ";
  cin >> weight;

  cout << "Enter your height in inches: ";
  cin >> height;

  bmi = (weight * 703) / (height * height);

  if(bmi >= 18.5 && bmi <= 25.0){
    cout << "Optimal BMI" << endl;
  }
  else if(bmi < 18.5){
    cout << "Underweight BMI" << endl;
  }
  else{
    cout << "Overweight BMI" << endl;
  }

  cout << banner << endl;
  return 0;
}