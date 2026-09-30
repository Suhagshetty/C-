#include <iostream>
using namespace std;

int main() {

  // Challenge 1 — Positive/Negative
  double num;
  cout << "Enter a number: ";
  cin >> num;

  if (num > 0)
    cout << "Positive" << endl;
  else if (num < 0)
    cout << "Negative" << endl;
  else
    cout << "Zero" << endl;

  // Challenge 2- Largest of 3

  int num1 = 10;
  int num2 = 20;
  int num3 = 30;
  if (num1 > num2 && num1 > num3) {
    cout << "The largest number is: " << num1 << endl;
  } else if (num2 > num1 && num2 > num3) {
    cout << "The largest number is: " << num2 << endl;
  } else {
    cout << "The largest number is: " << num3 << endl;
  }

  // Challenge 3 — Even/Odd

  int checkNumber = 6;
  if (checkNumber % 2 == 0) {
    std::cout << "The number is even" << std::endl;
  } else {
    std::cout << "The number is odd" << std::endl;
  }

  return 0;
}