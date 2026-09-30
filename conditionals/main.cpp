#include <iostream>
int main() {

  // If else statments in C++ :- if a condition is true then execute some code
  // if not show the other half of the statment which the user guides.

  int age = 23;
  if (age >= 18) {
    std::cout << "You are an adult!" << std::endl;
  } else {
    std::cout << "You are under age" << std::endl;
  }

  int marks = 87;
  if (marks >= 90) {
    std::cout << "Grade A+" << std::endl;
  } else if (marks >= 80) {
    std::cout << "Grade A" << std::endl;
  } else if (marks >= 70) {
    std::cout << "Grade B" << std::endl;
  } else if (marks >= 60) {
    std::cout << "Grade C" << std::endl;
  } else {
    std::cout << "Fail" << std::endl;
  }

  // COMPARISON OPERATORS:- [ == , !=, > , < , >= , <= ]

  int x = 10;
  if (x == 10) {
    std::cout << "X is 10 " << std::endl;
  } else {
    std::cout << "X is not 10" << std::endl;
  }

  // !=

  int y = 10;
  if (y != 1) {
    std::cout << "Y is not 10" << std::endl;
  }

  // LOGICAL OPERATORS:-

  // in AND (&&) both the conditions must be true.
  int ages = 23;
  if (ages >= 18 && ages <= 30) {
    std::cout << "Age is between 18 and 30" << std::endl;
  } else {
    std::cout << "I dont know what to say!" << std::endl;
  }

  // OR (||) :- atleast one condition must be true.

  int day;
  std::cout << "Enter the number of the day" << std::endl;
  std::cin >> day;
  if (day == 6 || day == 7) {
    std::cout << "Weekend" << std::endl;
  } else {
    std::cout << "Not a weekend" << std::endl;
  }

  // NOT (!) it revereses the value

  bool developer = false;
  if (!developer) {
    std::cout << "developer" << std::endl;
  } else {
    std::cout << "not a developer" << std::endl;
  }

  // NESTED IF STATEMENT:- an if statement which is inside another id statement.

  int currentAge = 23;
  bool hasId = true;
  if (currentAge >= 18) {
    if (hasId) {
      std::cout << "Entry allowed" << std::endl;
    }
  } else {
    std::cout << "Not allowed" << std::endl;
  }

  // SWITCH STATEMENT:- is usefull when you want to compare one value against
  // other values.

  int dayy;
  std::cout << "ENTER THE NUMBER OF THE DAY" << std::endl;
  std::cin >> dayy;
  switch (dayy) {
  case 1:
    std::cout << "Monday" << std::endl;
    break;
  case 2:
    std::cout << "Tuesday" << std::endl;
    break;
  case 3:
    std::cout << "Wednesday" << std::endl;
    break;

  case 4:
    std::cout << "Thursday" << std::endl;
    break;
  case 5:
    std::cout << "Friday" << std::endl;
    break;
  case 6:
    std::cout << "Saturday" << std::endl;
    break;
  case 7:
    std::cout << "Sunday" << std::endl;
    break;

  default:
    std::cout << "Invalid day" << std::endl;
  }

  // Console Calculator.

  double num1;
  double num2;
  char operation;
  std::cout << "Enter the first Number:- " << std::endl;
  std::cin >> num1;
  std::cout << "Enter the second Number:- " << std::endl;
  std::cin >> num2;

  std::cout << "Choose your operation (+,-,*,/):- " << std::endl;
  std::cin >> operation;

  switch (operation) {
  case '+':
    std::cout << "Result is:- " << num1 + num2 << std::endl;
    break;
  case '-':
    std::cout << "Result is:- " << num1 - num2 << std::endl;
    break;
  case '*':
    std::cout << "Result is:- " << num1 * num2 << std::endl;
    break;
  case '/':
    std::cout << "Result is:- " << num1 / num2 << std::endl;
    break;
  default:
    std::cout << "Invalid operation Nigga!" << std::endl;
  }

  // TERNARY OPERATOR:- it is a shorter version of if/else. condition ?
  // value_if_true : value_if_false;

  int checkAge = 20;
  std::string result = (checkAge >= 18) ? "Adult" : "Minor";
  std::cout << result << std::endl;

  // EXAMPLE - 2

  int checkNumber;
  std::cout << "ENTER A NUMBER TO CHECK FOR EVEN OR NOT:- " << std::endl;
  std::cin >> checkNumber;
  std::string results = (checkNumber % 2 == 0) ? "EVEN" : "ODD";
  std::cout << results << std::endl;

  // EXAMPLE - 3

  int number1 = 10;
  int number2 = 20;
  int largest = (number1 > number2) ? number1 : number2;
  std::cout << "The largest number is:- " << largest << std::endl;

  return 0;
}