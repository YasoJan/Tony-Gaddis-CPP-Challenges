#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout;
using std::cin;
using std::endl;


const int MAX_COL = 10;
const int MAX_ROW = 10;
// getTotal. This function should accept a two-dimensional array as its argument and return the total of all the values in the array.
int getTotal(int arr[][MAX_COL], int MAX_ROW){
  int total = 0;
  for(int i = 0; i<MAX_ROW; i++){
      for(int j =0; j<MAX_COL; j++){
        total+=arr[i][j];
      }
    } // end of outter loop
  return total;
  }

  int getRowTotal(int arr[][MAX_COL], int row){
  int total = 0;
  for(int i = row; i<row+1; i++){
      for(int j =0; j<MAX_COL; j++){
        total+=arr[i][j];
      }
    } // end of outter loop
  return total;
  }

  int getColTotal(int arr[][MAX_COL], int col){
  int total = 0;
  for(int i = 0; i<MAX_ROW; i++){
      for(int j =col; j<col+1; j++){
        total+=arr[i][j];
      }
    } // end of outter loop
  return total;
  }

  int getHighestInRow(int arr[][MAX_COL], int row){
  int total = 0;
  int max = -1;
  for(int i = row; i<row + 1; i++){
      for(int j =0; j<MAX_COL; j++){
        if(arr[i][j] > max){
          max = arr[i][j];
        }
      }
    } // end of outter loop
  return max;
  }
  int getLowestInRow(int arr[][MAX_COL], int row){
  int total = 0;
  int min = 999;
  for(int i = row; i<row + 1; i++){
      for(int j =0; j<MAX_COL; j++){
        if(arr[i][j] < min){
          min = arr[i][j];
        }
      }
    } // end of outter loop
  return min;
  }
  void manuallyInitializeArr (int arr[][MAX_COL], int MAX_ROW){
    for(int i =0; i<MAX_ROW; i++){
      for(int j =0; j<MAX_COL; j++){
        cout << "Enter value for row # " << i << ", col # " << j << ": ";
        cin >> arr[i][j];
        cout << endl;
      }
    }
  }
  void randomlyInitializeArr (int arr[][MAX_COL], int MAX_ROW){
    unsigned seed = time(0);
    for(int i =0; i<MAX_ROW; i++){
      for(int j =0; j<MAX_COL; j++){
        srand(seed);
        arr[i][j] = rand() % 101;
      }
    }
  }

int main(){

  int arr[MAX_ROW][MAX_COL];
  randomlyInitializeArr(arr, MAX_ROW);
  int total = getTotal(arr, MAX_ROW);
  int rowTotal = getRowTotal(arr, 2);
  int colTotal = getColTotal(arr, 5);
  cout << "Row #2 total: " << rowTotal << endl;
  cout << "Col #5 total: " << colTotal << endl;
  int maxCol = getHighestInRow(arr, 5);
  int minCol = getLowestInRow(arr, 5);
  cout << "Row #5 highest col total: " << maxCol << endl;
  cout << "Row #5 lowest col total: " << minCol << endl;
  return 0;
}