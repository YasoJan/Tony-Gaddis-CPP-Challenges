/**************************************************************************************************** 
* Author: Yasin Zahir

* Sum of Numbers

* 5/6/2026
*****************************************************************************************************/

#include <iostream>
using namespace std;

int main(){
  string banner = "--------------  Sum of Numbers  --------------";

  int num = 0;
  int total = 0;

  cout << banner << endl;
  
  do{
  cout << "Enter a positive integer value: ";
  cin >> num;
  }while(num <= 0);

  for(int i =1; i<=num; i++){
    total+=i;
  }

  cout << "Total: " << total << endl;

  cout << banner << endl;

  return 0;
}