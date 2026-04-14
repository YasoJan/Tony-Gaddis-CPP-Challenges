/*
Mobile Service Provider

 A mobile phone service provider has three different subscription packages for its 
customers: 

 Package A: For $39.99 per month 450 minutes are provided. Additional minutes are 
$0.45 per minute.

 Package B: For $59.99 per month 900 minutes are provided. Additional minutes are 
$0.40 per minute.

`Package C: For $69.99 per month unlimited minutes provided. 

Write a program that calculates a customer’s monthly bill. It should ask which package 
the customer has purchased and how many minutes were used. It should then display 
the total amount due. 
*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
  double packageA = 39.99;
  int minsA = 450;
  double addOnMinsA = 0.45;

  double packageB = 59.99;
  int minsB = 900;
  double addOnMinsB = 0.40;

  double packageC = 69.99;
  // infiinite mins
  // no add on costs

  char package;
  cout << "What package did you purchase: ";
  cin >> package;
  package = toupper(package);
  
  int mins;
  cout << "Enter minutes used: ";
  cin >> mins;

  double total;

  if(package == 'A'){
    if(mins > minsA){
      total = packageA + (addOnMinsA * (mins - minsA));
    }
    else{
      total = packageA;
    }
    cout << "Total due: $" << total << endl;
  }
  else if(package == 'B'){
    if(mins > minsB){
      total = packageB + (addOnMinsB * (mins - minsB));
    }
    else{
      total = packageB;
    }
    cout << "Total due: $" << total << endl;
  }
  else if(package == 'C'){
    total = packageC;
    cout << "Total due: $" << total << endl;
  }
  else{
    cout << "Enter a correct package";
  }

  
  return 0;
  
}