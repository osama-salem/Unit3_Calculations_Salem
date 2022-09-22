#include <iostream>
using namespace std;

int main() {

  //declare variables
 double num1, num2;
  int num3, num4;
  double addition, subtraction, multiplication, division;
  int modulus;

  //Request input
  cout << "Enter number 1, number 2, number 3, and number 4 separated by a space\n";
  cin >> num1 >> num2 >> num3 >> num4;

  //Process
  //addition
  addition = num1 + num2;

  //subtraction
  subtraction = num1 - num2;

  //multiplication
  multiplication = num1 * num2;

  //division
  division = num1 / num2;

  //modulus
  modulus = num1 % num2;
  
  
  return 0;
}