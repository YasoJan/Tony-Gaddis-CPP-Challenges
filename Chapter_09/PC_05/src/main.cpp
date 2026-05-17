/**************************************************************************************************** 
* Author: Yasin Zahir

* Pointer Rewrite

* 5/9/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "--------------  Pointer Rewrite  --------------";
  cout << banner << endl;
  
  cout << banner << endl;
}


int do_something(int *x, int *y) {
  int temp = *x;
  *x = *y * 10; 
  *y = temp * 10;
  return *x + *y; 
}


/*
The following function uses reference variables as parameters. 
Rewrite the function so it uses pointers instead of reference variables, 
and then demonstrate the function in a complete program.
-----------------------------Function-----------------------------
int doSomething(int &x, int &y) {
  int temp = x;   --> 
  *x = *y * 10;
  *y = temp * 10; 
  return *x + *y;
}
*/


