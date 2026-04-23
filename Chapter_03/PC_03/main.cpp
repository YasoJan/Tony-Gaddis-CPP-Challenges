/**************************************************************************************************** 
* Author: Yasin Zahir

* Test Average

* 4/23/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner =  "-------------- Test Average  --------------";
  double score_1 = 0.0;
  double score_2 = 0.0;
  double score_3 = 0.0;
  double score_4 = 0.0;
  double score_5 = 0.0;
  double average = 0.0;
  cout << banner << endl;
  cout << fixed << setprecision(1);
  cout << "Enter test score #1: ";
  cin >> score_1;

  cout << "Enter test score #2: ";
  cin >> score_2;

  cout << "Enter test score #3: ";
  cin >> score_3;

  cout << "Enter test score #4: ";
  cin >> score_4;

  cout << "Enter test score #5: ";
  cin >> score_5;

  average = (score_1 + score_2 + score_3 + score_4 + score_5) / 5.0;
  cout << "Average: " << average << endl;
  cout << banner << endl;

  return 0;
}