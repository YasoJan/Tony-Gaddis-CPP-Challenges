/**************************************************************************************************** 
* Author: Yasin Zahir

* Areas of Rectangles

* 4/30/2026
*****************************************************************************************************/

#include <iostream>
using namespace std;

/*
The area of a rectangle is the rectangle’s length times its width. 
Write a program that asks for the length and width of two rectangles. 
The program should tell the user which rectangle has the greater area, or if the areas are the same.
*/

int main(){
  string banner =  "--------------  Areas of Rectangles  --------------";
  string max;
  string min;

  int len1 = 0;
  int len2 = 0;
  int wid1 = 0;
  int wid2 = 0;
  int area1 = 0;
  int area2 = 0;

  cout << banner << endl;

  cout << "Enter the length of rectangle 1: ";
  cin >> len1;

  cout << "Enter the width of rectangle 1: ";
  cin >> wid1;

  cout << "Enter the length of rectangle 2: ";
  cin >> len2;

  cout << "Enter the width of rectangle 2: ";
  cin >> wid2;

  area1 = len1 * wid1;
  area2 = len2 * wid2;

  if(area1 > area2){
    max = "Rectangle 1";
    min = "Rectangle 2";
  }
  else if(area1 < area2){
    max = "Rectangle 2";
    min = "Rectangle 1";
  }
  else{
    cout << "Both are the same area!" << endl;
    cout << banner << endl;
    return 0;
  }

  cout << "The rectangle with the larger area is: " << max << endl;
  cout << "The rectangle with the smaller area is: " << min << endl;

  cout << banner << endl;

  return 0;
}