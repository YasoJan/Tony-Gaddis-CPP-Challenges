/**************************************************************************************************** 
* Author: Yasin Zahir

* Color Mixer

* 5/1/2026
*****************************************************************************************************/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
  string banner = "--------------  Color Mixer --------------";
  string pc1;
  string pc2;

  cout << banner << endl;

  do 
  {
    cout << "Enter a primary color: ";
    cin >> pc1;
    if(pc1 != "blue" && pc1 != "red" && pc1 != "yellow"){
      cout << "ERROR! Enter a valid color!" << endl;
    }
  }while(pc1 != "blue" && pc1 != "red" && pc1 != "yellow");

  do 
  {
    cout << "Enter another primary color: ";
    cin >> pc2;
    if(pc2 != "blue" && pc2 != "red" && pc2 != "yellow"){
      cout << "ERROR! Enter a valid color!" << endl;
    }
  }while(pc2 != "blue" && pc2 != "red" && pc2 != "yellow");

  if((pc1 == "blue" || pc2 == "blue") && (pc1 == "red" || pc2 == "red")){
    cout << "Blue + Red: Purple" << endl;
  }
  else if((pc1 == "red" || pc2 == "red") && (pc1 == "yellow" || pc2 == "yellow")){
    cout << "Red + Yellow: Orange" << endl;
  }
  else if((pc1 == "blue" || pc2 == "blue") && (pc1 == "yellow" || pc2 == "yellow")){
    cout << "Blue + Yellow: Green" << endl;
  }
  
  cout << banner << endl;

  return 0;
}