/**************************************************************************************************** 
* Author: Yasin Zahir

* Math Tutor

* 4/24/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  unsigned seed = time(0);
  srand(seed);

  int num1 = rand() % 1001;
  int num2 = rand() % 1001;
  int result = num1 + num2;
  
  string banner = "-------------- Math Tutor  --------------";
  string press_key;

  cout << banner << endl;
  cout << " " << num1 << endl;
  cout << "+"<<  num2 << endl;
  cin >> press_key;
  cout << " " << result << endl;
  cout << banner << endl;
  return 0;
}