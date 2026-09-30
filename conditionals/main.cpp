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
  return 0;
}