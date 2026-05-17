/**************************************************************************************************** 
* Author: Yasin Zahir

* Personal Best

* 5/16/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main(){
  const int MAX_VAULTS = 3;

  string banner = "--------------  Personal Best  --------------";
  string name;
  string date;
  string string_height;

  vector<string>dates;
  vector<double>heights;

  double min_height = numeric_limits<double>::max();
  double max_height = 0.0;

  double max_index;
  double med_index;
  double min_index;
  double height;

  cout << "Enter the name of the pole vaulter: ";
  getline(cin, name);

  for(int i =0; i < MAX_VAULTS; i++){
    cout << "Enter the date of a vault: ";
    getline(cin, date);
    dates.push_back(date);

    do{
      cout << "Enter the vault height in meters: ";
      getline(cin, string_height);
      height = stoi(string_height);
    }while(height < 2.0 || height > 5.0);
    heights.push_back(height);
  }

  for(int i = 0; i < MAX_VAULTS; i++){
    if(heights[i] > max_height){
      max_index = i+1; 
    }
    else if(heights[i] < min_height){
      min_index = i+1; 
    }
  }

  med_index = (MAX_VAULTS - max_index) - 1;

  cout << "1st Vault: " << dates[max_index] << endl;
  cout << "Height: " << heights[max_index] << "m" << endl;

  cout << "2nd Vault: " << dates[med_index] << endl;
  cout << "Height: " << heights[med_index] << "m" << endl;

  cout << "3rd Vault: " << dates[min_index] << endl;
  cout << "Height: " << heights[min_index] << "m" << endl;
   
  cout << banner << endl;

  return 0;
}