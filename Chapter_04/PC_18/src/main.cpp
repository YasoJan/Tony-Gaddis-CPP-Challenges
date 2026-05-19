/**************************************************************************************************** 
* Author: Yasin Zahir

* Fat Gram Calculator

* 5/18/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
  string banner = "--------------  Fat Gram Calculator  --------------";

  const double LOW_FAT_THRESHOLD = 0.30;
  const int CALORIES_PER_FAT = 9;

  double calories = 0.0;
  double fat_grams = 0.0;
  double calories_from_fat = 0.0;
  double fat_calories_ratio = 0.0;
  double percent_fat = 0.0;

  cout << banner << endl;
  cout << std::fixed << setprecision(1);

  do{

    do{
      cout << "Enter the number of calories: ";
      cin >> calories;

      if(calories < 0){
        cout << "ERROR! Calories cannot be negative." << endl;
      }
    }while(calories < 0);

    do{
      cout << "Enter the number of fat grams: ";
      cin >> fat_grams;

      if(fat_grams < 0){
        cout << "ERROR! Fat grams cannot be negative." << endl;
      }
    }while(fat_grams < 0);

    calories_from_fat = fat_grams * CALORIES_PER_FAT;

    if(calories_from_fat > calories){
      cout << "ERROR! The calories from fat cannot exceed total calories!" << endl;
    }
    
  }while(calories_from_fat > calories);

  
  fat_calories_ratio = calories_from_fat / calories;
  percent_fat = fat_calories_ratio * 100;

  if(fat_calories_ratio < LOW_FAT_THRESHOLD){
    cout << "WARNING! Food is low in fat." << endl;
  }

  cout << "Percentage of calories that come from fat: " << percent_fat << "%" << endl;

  cout << banner << endl;

  return 0;
}