#include <iostream>

int add(int a, int b) { return a + b; }

int subtraction(int a, int b) { return a - b; }

int multiplication(int a, int b) { return a * b; }

int division(int a, int b) { return (double)a / b; }

int main() {
  int num1 = 20;
  int num2 = 5;

  int sum = add(num1, num2);
  int difference = subtraction(num1, num2);
  int product = multiplication(num1, num2);
  int quotient = division(num1, num2);

  std::cout << "Addition:- " << sum << std::endl;
  std::cout << "Subtraction:- " << difference << std::endl;
  std::cout << "Multiplication:- " << product << std::endl;
  std::cout << "Division:- " << quotient << std::endl;

  return 0;
}