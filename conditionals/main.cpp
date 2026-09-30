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
    std::cout << "Grade A+";
  } else if (marks >= 80) {
    std::cout << "Grade A";
  } else if (marks >= 70) {
    std::cout << "Grade B";
  } else if (marks >= 60) {
    std::cout << "Grade C";
  } else {
    std::cout << "Fail";
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
    std::cout << "Monday";
    break;
  case 2:
    std::cout << "Tuesday";
    break;
  case 3:
    std::cout << "Wednesday";
    break;

  default:
    std::cout << "Invalid day";
  }

  // Console Calculator 🧮

  return 0;
}