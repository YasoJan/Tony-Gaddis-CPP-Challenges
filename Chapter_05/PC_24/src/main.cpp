/**************************************************************************************************** 
* Author: Yasin Zahir

* Using Files—Numeric Processing

* 5/6/2026
*****************************************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
  string banner = "--------------  Numeric Processing  --------------";

  int num = 0;

  cout << banner << endl;

  ifstream input_file;
  input_file.open("../random.txt");

  if(input_file){
    int num_numbers = 0;
    int sum = 0;
    double average = 0.0;

    while(input_file >> num){
      num_numbers+=1;
      sum+=num;
    }
    average = static_cast<double>(sum) / num_numbers;
    cout << "Number of numbers: " << num_numbers << endl;
    cout << "Sum of all numbers: " << sum << endl;
    cout << "Average: " << average << endl;

    input_file.close();
  }
  else{
    cout << "ERROR! FILE NOT FOUND!" << endl;
  }
  cout << banner << endl;

  return 0;
}