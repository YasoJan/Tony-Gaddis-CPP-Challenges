/**************************************************************************************************** 
* Author: Yasin Zahir

* Book Club Points

* 5/12/2026
*****************************************************************************************************/

#include <iostream>
using namespace std;

int main(){
  string banner = "-------------- Book Club Points  --------------";

  const int ZERO_BOOK_POINTS = 0;
  const int ONE_BOOK_POINTS = 5;
  const int TWO_BOOKS_POINTS = 15;
  const int THREE_BOOKS_POINTS = 30;
  const int MULTIPLE_BOOKS_POINTS = 60;

  int books_purchased = 0;
  int points = 0;
  
  cout << banner << endl;

  do{
    cout << "Enter the number of books you've purchased this month: ";
    cin >> books_purchased;
  }while(books_purchased < 0);

  if(books_purchased == 0){
    points = ZERO_BOOK_POINTS;
  }
  else if(books_purchased == 1){
    points = ONE_BOOK_POINTS;
  }
  else if(books_purchased == 2){
    points = TWO_BOOKS_POINTS;
  }
  else if(books_purchased == 3){
    points = THREE_BOOKS_POINTS;
  }
  else if(books_purchased >= 4){
    points = MULTIPLE_BOOKS_POINTS;
  } 
  cout << "Number of points awarded: " << points << endl;

  cout << banner << endl;

  return 0;
}