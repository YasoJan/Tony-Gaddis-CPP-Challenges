/**************************************************************************************************** 
* Author: Yasin Zahir

* Mass and Weight

* 5/1/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner =  "--------------  Mass and Weight  --------------";
  double mass = 0.0;
  double weight = 0.0;
  const double GRAVITY = 9.8;
  const int UPPER_THRESHOLD = 1000;
  const int LOWER_THRESHOLD = 10;

  cout << banner << endl;
  cout << fixed << setprecision(1);

  cout << "Enter an object's mass (kg): ";
  cin >> mass;

  weight = mass * GRAVITY;
  cout << "Weight (newtons): " << weight << endl;

  if(weight > UPPER_THRESHOLD){
    cout << "Object is too heavy!" << endl;
  }
  else if(weight < LOWER_THRESHOLD){
    cout << "Object is too light!" << endl;
  }
  else{
    cout << "Object is of moderate weight" << endl;
  }
  cout << banner << endl;
  return 0;
}