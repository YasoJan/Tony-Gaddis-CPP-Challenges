/******************************************************************
 * Author: Yasin Zahir
 
 * isPrime Function

 * 5/7/2026
*******************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

bool is_prime(int num);

int main(){
  string banner = "--------------  isPrime  --------------";
  int num;
  bool prime_num = false;
  cout << banner << endl;

  cout << "Enter a number: ";
  cin >> num;

  prime_num = is_prime(num);
  if(prime_num){
    cout << "Number is prime" << endl;
  }
  else{
    cout << "Number is NOT prime" << endl;
  }
  cout << banner << endl;
  return 0;
}

bool is_prime(int num){
  if(num < 2){
    return false;
  }
  for(int i = 2; i<num; i++){
    if(num % i == 0){
      return false;
    }
  }
  return true;
}