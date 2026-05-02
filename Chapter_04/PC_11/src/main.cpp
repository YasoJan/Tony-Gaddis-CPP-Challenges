/**************************************************************************************************** 
* Author: Yasin Zahir

* Math Tutor

* 5/2/2026
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
  int user_answer = 0;

  bool is_correct = false;
  
  string banner = "-------------- Math Tutor  --------------";
  string press_key;

  cout << banner << endl;

  cout << " " << num1 << endl;
  cout << "+"<<  num2 << endl;
  cout << "--------------" << endl;
  cin >> user_answer;
  is_correct = user_answer == result;

  if(is_correct){
    cout << "Congratulations! You win!" << endl;
  }
  else{
    cout << "Sorry thats the wrong answer! You lose!" << endl;
    cout << "Correct answer: " << result << endl;
  }
  
  cout << banner << endl;
  return 0;
}