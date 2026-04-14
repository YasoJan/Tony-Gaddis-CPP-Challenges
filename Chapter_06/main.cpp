/******************************************************************
 * Author: Yasin Zahir
 
 * Rock Paper Scissors

 * 4/10/2026
 
*******************************************************************/

#include <iostream>
#include <cstdlib>
using std::cout;
using std::cin;
using std::endl;
using std::string;

string computerChoice(){
  int randomNum = rand() % 3;
  if(randomNum == 0){
    return "rock";
  }
  else if(randomNum == 1){
    return "paper";
  }
  else if(randomNum == 2){
    return "scissors";
  }
}

string playRound(string computerChoice, string humanChoice){

  // human chooses rock
  if(humanChoice == "rock"){
    if(computerChoice == "rock"){
      return "tie";
    }
    else if(computerChoice == "paper"){
      return "computer";
    }
    else{
      return "human";
    }
  } // end of human choosing rock

  // human chooses paper
 else if(humanChoice == "paper"){
    if(computerChoice == "rock"){
      return "human";
    }
    else if(computerChoice == "paper"){
      return "tie";
    }
    else{
      return "computer";
    }
  } // end of human choosing paper

  // human chooses paper
  else if(humanChoice == "scissors"){
    if(computerChoice == "rock"){
      return "computer";
    }
    else if(computerChoice == "paper"){
      return "human";
    }
    else{
      return "tie";
    }
  } // end of human choosing scissors

  else{
    return "";
  }
  
}

string display(string winner){
  return "Winner: " + winner + "\n";
}

string humanChoice(){
  string selection;
  do{
  cout << "Enter your choice: rock, paper, or scissors: ";
  getline(cin, selection);
  } while(selection != "rock" && selection!= "paper" && selection!= "scissors");
  return selection;
}

int main(){
  cout << "/******************************************************************\n* Author: Yasin Zahir\n\n* Rock Paper Scissors\n\n* 4/10/2026\n*******************************************************************/" << endl;
char try_again = 'n';
do{
string compChoice = computerChoice();
string humChoice = humanChoice();
string winner;
do{
   winner = playRound(compChoice, humChoice);
   if(winner == "tie"){
    cout << "It's a tie! Replaying round..." << endl;
   }
}while(winner == "tie");
cout << display(winner);
cout << "Would you like to try again?: ";
cin >> try_again;
cin.ignore();
} while(try_again == 'Y' || try_again == 'y');
}