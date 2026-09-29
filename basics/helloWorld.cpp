#include <iostream>

int main() {
  // Introduction To C++:- C++ is a high-level, general-purpose, object-oriented
  // programming language created by Bjarne Stroustrup at Bell Labs in 1979

  // "I want to use the standard input/output tools."
  // iostream stands roughly for input/output stream.

  std::cout << "Hello World" << std::endl;

  // Variables:- is simply a named location used to store a Value. TYPE =>
  // VARIABLE => VALUE.
  int age = 22;
  age = 23;
  std::cout << "My age is :- " << age << std::endl;

  // Basic C++ Data Types:-

  // INT:- Integers stores whole Numbers and we can perform Calculations
  int Marks = 99;
  int Marks1 = 1;
  int sum = Marks + Marks1;
  std::cout << "The sum is:- " << sum << std::endl;

  // Long Long:- used for large Integers.
  long long a = 100000;
  long long b = 100000;
  std::cout << a * b << std::endl;

  // Float:- stores decimal numbers.

  float pi = 3.14f;
  std::cout << "The value of PI is:- " << pi << std::endl;

  // Double:- also stores decimal numbers and generally has more precision than
  // float.

  double PI = 3.141592653589793;
  std::cout << "This is a demo of PI:- " << PI << std::endl;

  // CHAR:- stores one character.
  char Grade = 'A';
  std::cout << "My Grade at 11th standard was " << Grade << std::endl;

  // Bool:- stores either true or false.
  bool isLoggedIn = false;
  bool isAdmin = false;
  if (isLoggedIn) {
    std::cout << "Welcome" << std::endl;
  } else {
    std::cout << "Fail" << std::endl;
  }

  // STRING- stores text and requires a standard Library called Namespace.

  std::string name = "Suhag S Shetty";
  std::cout << name;
  return 0;
}