/**************************************************************************************************** 
* Author: Yasin Zahir

* Exam Grader

* 5/7/2026
*****************************************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
  string banner = "--------------  Exam Grader  --------------";

  vector<char>correct_answers;
  vector<char>student_answers;

  char letter;

  ifstream correct_answers_file;
  correct_answers_file.open("../CorrectAnswers.txt");

  ifstream student_answers_file;
  student_answers_file.open("../StudentAnswers.txt");

  cout << banner << endl;

  if(correct_answers_file){
    vector<char>missed_questions;
    int total_missed = 0;
    int total_correct = 0;
    int total_questions = 0;
    double percent_correct = 0.0;
    while(correct_answers_file >> letter){
        correct_answers.push_back(letter);
      }
    if(student_answers_file){
      while(student_answers_file >> letter){
        student_answers.push_back(letter);
      }
      for(int i = 0; i<correct_answers.size(); i++){
        if(correct_answers[i] != student_answers[i]){
          total_missed+=1;
          cout << "#" << total_missed << ": INCORRECT!" << endl;
          cout << "Your Answer: " << student_answers[i] << endl;
          cout << "Correct Answer: " << correct_answers[i] << endl;
        }
      }
      cout << banner << endl;
      total_questions = correct_answers.size();
      total_correct = total_questions - total_missed;
      percent_correct = (static_cast<double>(total_correct) / total_questions) * 100;
      cout << "Total number of questions missed: " << total_missed << endl;
      cout << "Percentage of questions answered correctly: " << percent_correct << "%" << endl;
      cout << banner << endl;
      if(percent_correct >= 70.0){
        cout << "STUDENT PASSED" << endl;
      }
      else{
        cout << "STUDENT FAILED" << endl;
      }
      correct_answers_file.close();
      student_answers_file.close();
    }
    else{
      cout << "ERROR! StudentAnswers.txt File NOT Found" << endl;
    }
  }
  else{
    cout << "ERROR! CorrectAnswers.txt File NOT Found" << endl;
  }

  cout << banner << endl;
  return 0;
}