/**************************************************************************************************** 
* Author: Yasin Zahir

* Minimum/Maximum

* 5/1/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "-------------- Minimum/Maximum --------------";
  int num1 = 0;
  int num2 = 0;
  int max = 0;
  int min = 0;

  cout << banner << endl;
  cout << "Enter a number: ";
  cin >> num1;

  cout << "Enter another number: ";
  cin >> num2;

  max = num1 > num2 ? num1 : num2;
  min = num1 < num2 ? num1 : num2;
  
  cout << "Maximum number is: " << max << endl;
  cout << "Minimum number is: " << min << endl;
  cout << banner << endl;

  return 0;
}