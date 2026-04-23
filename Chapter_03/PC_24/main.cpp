/*
Word Game 

Written By; Yasin Zahir

 Write a program that plays a word game with the user. The program should ask the 
user to enter the following: 

 • His or her name
 • His or her age
 • The name of a city
 • The name of a college
 • A profession
 • A type of animal
 • A pet’s name 

 After the user has entered these items, the program should display the following story, 
inserting the user’s input into the appropriate locations: 

 There once was a person named NAMEwho lived in CITY . At the age of 
 AGE , NAMEwent to college at COLLEGE . NAMEgraduated and went to work 
as a PROFESSION . Then, NAMEadopted a(n) ANIMALnamed PETNAME . They 
both lived happily ever after!
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
  string name;
  cout << "Enter your name: ";
  getline(cin, name);

  int age;
  cout << "Enter your age: ";
  cin >> age;
  cin.ignore(); // flush the input buffer

  string city;
  cout << "Enter the name of a city: ";
  getline(cin, city);

  string college;
  cout << "Enter the name of a college: ";
  getline(cin, college);

  string profession;
  cout << "Enter a profession: ";
  getline(cin, profession);

  string animal;
  cout << "Enter a type of animal: ";
  getline(cin, animal);

  string petName;
  cout << "Enter the name of a pet: ";
  getline(cin, petName);
  cout << endl;


  cout << "There once was a person named " << name << " who lived in " << city << "." <<endl;
  cout<< "At the age of " << age << ", " << name << " went to college at " << college <<  "." << endl; 
  cout << name << " graduated and went to work as a " << profession << ". " <<  "Then, " << name << " adopted a(n) " << animal << " named " << petName << "." << endl;
  cout << " They both lived happily ever after! " << endl;


  return 0;
}
