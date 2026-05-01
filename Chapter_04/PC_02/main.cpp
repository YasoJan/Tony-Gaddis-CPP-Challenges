/**************************************************************************************************** 
* Author: Yasin Zahir

* Roman Numeral Converter

* 4/30/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*
Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.
*/

int main(){
  string banner =  "--------------  Roman Numeral Converter  --------------";
  int num = 0;

  cout << banner << endl;
  do
  {
    cout << "Enter a number within the range of 1 through 10: ";
    cin >> num;
  }while(num < 1 || num > 10);
  
  switch(num){
    case 1: cout << "I" << endl;
    break;
    
    case 2: cout << "II" << endl;
    break;

    case 3: cout << "III" << endl;
    break;

    case 4: cout << "IV" << endl;
    break;

    case 5: cout << "V" << endl;
    break;

    case 6: cout << "VI" << endl;
    break;

    case 7: cout << "VII" << endl;
    break;

    case 8: cout << "VIII" << endl;
    break;

    case 9: cout << "IX" << endl;
    break;

    case 10: cout << "X" << endl;
    break;
  }

  cout << banner << endl;

  return 0;
}