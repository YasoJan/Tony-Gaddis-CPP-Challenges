/**************************************************************************************************** 
* Author: Yasin Zahir

* Running the Race

* 5/16/2026
*****************************************************************************************************/

#include <iostream>
#include <limits>
#include <vector>
using namespace std;

int main(){
  string banner = "-------------- Running the Race  --------------";

  vector<string>name;
  vector<double>time;

  string max_runner;
  string min_runner;
  string med_runner;
  string string_name;

  double double_time;
  double max_time = 0.0;
  double min_time = numeric_limits<double>::max();
  double med_time = 0.0;

  cout << banner << endl;

  for(int i =0; i<3; i++){
    cout << "Enter the name of runner #" << (i+1) << ": ";
    cin >> string_name;
    name.push_back(string_name);

    do{
      cout << "Enter the time for " << name[i] << ": ";
      cin >> double_time;
    }while(double_time <= 0);
    time.push_back(double_time);
  }

  for(int i =0; i<time.size(); i++){
    if(time[i] > max_time){
      max_time = time[i];
      max_runner = name[i];

    }
    if(time[i] < min_time){
      min_time = time[i];
      min_runner = name[i];
    }
  }
  if(name[0] != max_runner && name[0] != min_runner){
    med_runner = name[0];
    med_time = time[0];
  }

  else if(name[1] != max_runner && name[1] != min_runner){
    med_runner = name[1];
    med_time = time[1];
  }

  else if(name[2] != max_runner && name[2] != min_runner){
    med_runner = name[2];
    med_time = time[2];
  }

  cout << "First Place: " << min_runner << endl;
  cout << "Time: " << min_time << endl;

  cout << "Second Place: " << med_runner << endl;
  cout << "Time: " << med_time << endl;

  cout << "Last Place: " << max_runner << endl;
  cout << "Time: " << max_time << endl;
   
  cout << banner << endl;

  return 0;
}