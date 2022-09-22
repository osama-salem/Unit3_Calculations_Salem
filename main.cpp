#include <iostream>
using namespace std;

/*Osama Salem
  COSC-1436-57001
  Replit.com
  This program takes in the user’s input to perform mathematical calculations and displays the results. (Addition, subtraction, multiplication, division and modulus) 
*/

int main() {

  //declare variables
  double num1, num2;
  int num3, num4;
  double addition, subtraction, multiplication, division;
  int modulus;

  //Request input
  cout << "Enter a value for number 1 and a nonzero value for number 2, separated by a space: " << endl;
  cin >> num1 >> num2;
  
  cout << "\nEnter an integer value for number 3 and a nonzero integer value for number 4, separated by a space: " << endl;
  cin >> num3 >> num4;

  //Validate the user's input
  if ( num2 == 0 || num4 == 0){
    cout << "\nA value of 0 is NOT permissible for number 2 or number 4. Please run the program again and enter a nonzero value for those numbers." << endl;
  }
  else {
    
    addition = num1 + num2; //addition
    subtraction = num1 - num2; //subtraction
    multiplication = num1 * num2; //multiplication
    division = num1 / num2; //division
    modulus = num3 % num4; //modulus

    //Output
    cout << " \nResults" << endl;
    cout << "Addition: " << num1 << " + " << num2 << " = " << addition << endl;
    cout << "Subtraction: " << num1 << " - " << num2 << " = " << subtraction << endl;
    cout << "Multiplication: " << num1 << " * " << num2 << " = " << multiplication << endl;
    cout << "Division: " << num1 << " / " << num2 << " = " << division << endl;
    cout << "modulus: " << num3 << " % " << num4 << " = " << modulus << endl;
  }
  
  return 0;
}