/**************************************************************************************************** 
* Author: Yasin Zahir

* Array Allocator

* 5/9/2026
*****************************************************************************************************/


/*
Write a function that dynamically allocates an array of integers. 
The function should accept an integer argument indicating the number of elements to allocate. The function should return a pointer to the array.
*/

#include <iostream>
#include <iomanip>
#include <memory>
using namespace std;

unique_ptr<int[]> dynamic_allocator(int num);

int main(){
  string banner = "--------------  Array Allocator  --------------";
  int num = 0;
  cout << banner << endl;
  do{
    cout << "Enter the number of elements to allocate: ";
    cin >> num;
  }while(num <= 0);

  unique_ptr<int[]> ptr = dynamic_allocator(num);

  cout << "Unique Pointer to array: " << ptr << endl;

  cout << banner << endl;
  return 0;
}

unique_ptr<int[]> dynamic_allocator(int num){
  unique_ptr<int[]> ptr(new int[num]);
  return ptr;
}
