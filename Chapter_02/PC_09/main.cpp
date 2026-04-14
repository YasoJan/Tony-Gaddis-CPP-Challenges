/**************************************************************************************************** 
* Author: Yasin Zahir

* Cyborg Data Type Sizes

* 4/14/2026
*****************************************************************************************************/


#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

int main(){
  const int CHAR_BYTES = sizeof(char);
  const int INT_BYTES = sizeof(int);
  const int FLOAT_BYTES = sizeof(float);
  const int DOUBLE_BYTES = sizeof(double);

  cout << "-------------- Cyborg Data Type Sizes --------------" << endl;
  cout << "Char: " << CHAR_BYTES << " byte" << endl;
  cout << "Integer: " << INT_BYTES << " bytes" << endl;
  cout << "Float: " << FLOAT_BYTES << " bytes" << endl;
  cout << "Double: " << DOUBLE_BYTES << " bytes" << endl;
  cout << "-------------- Cyborg Data Type Sizes --------------" << endl;
}