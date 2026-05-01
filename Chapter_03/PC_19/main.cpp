/**************************************************************************************************** 
* Author: Yasin Zahir

* Monthly Payments

* 4/28/2026
*****************************************************************************************************/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <stdio.h>
using namespace std;

int main(){
  string banner =  "--------------  Monthly Payments  --------------";

  double annual_ir = 0.0;
  double loan_amount = 0.00;
  double monthly_ir = 0.0;
  double monthly_payment = 0.00;
  double paid_back = 0.00;
  double interest_paid = 0.00;

  int num_payments = 0;

  cout << banner << endl;
  cout << fixed << setprecision(2);
  
  cout << "Annual interest rate: ";
  cin >> annual_ir;

  cout << "Number of Payments: ";
  cin >> num_payments;

  cout << "Loan Amount: $";
  cin >> loan_amount;
  

/********************************************** COMPUTATION **********************************************/
  annual_ir = annual_ir / 100;
  monthly_ir = annual_ir / 12.0;
  monthly_payment = ((monthly_ir * pow((1+monthly_ir),num_payments)) / (pow((1+monthly_ir),num_payments) - 1)) * loan_amount;
  paid_back = monthly_payment * num_payments;
  interest_paid = paid_back - loan_amount;

  cout << "--------------" << endl;

  cout << "Loan Amount: $" << loan_amount << endl;

  cout << "Monthly Interest Rate: " << monthly_ir << "%" << endl;

  cout << "Number of Payments: " << num_payments << endl;

  cout << "Monthly Payment: $" << monthly_payment << endl;

  cout << "Amount Paid Back: $" << paid_back << endl;

  cout << "Interest Paid: $" << interest_paid << endl;

  cout << banner << endl;
  
  return 0;
}