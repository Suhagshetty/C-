#include <cmath>
#include <iostream>
int main() {
  // Addition

  int a = 10;
  int b = 40;
  int result = a + b;
  std::cout << result << std::endl;

  // Substraction

  int x = 100;
  int y = 90;
  int difference = x - y;
  std::cout << difference << std::endl;

  // Multiplication

  int D = 8;
  int E = 8;
  int product = D * E;
  std::cout << product << std::endl;

  // Division

  int P = 10;
  int Q = 3;
  int quotient = P / Q;
  std::cout << quotient << std::endl;
  // expected is 3.333 but C++ gives 3 because decimal is discared.

  // Modulus

  int R = 10;
  int S = 3;
  int remainder = R % S;
  std::cout << remainder << std::endl;

  // INCREMENT AND DECREMENT OPERATORS

  int score = 10;
  score++;
  std::cout << score << std::endl;

  int score1 = 100;
  score1--;
  std::cout << score1 << std::endl;

  // Compound Assignment Operators:-

  int balance = 1000;
  balance = balance + 500;
  std::cout << "The Balance is:- " << balance << std::endl;

  // Some more Compound Assignments:-

  int C = 10;
  C -= 5;
  std::cout << C << std::endl;
  C += 5;
  std::cout << C << std::endl;
  C *= 5;
  std::cout << C << std::endl;
  C /= 5;
  std::cout << C << std::endl;
  C %= 5;
  std::cout << C << std::endl;

  // TYPE CONVERSION:- Converting a value from one data type to another.

  int number = 10;
  double value = number;
  std::cout << value << std::endl;

  char Grade = 'A';
  int values = Grade;
  std::cout << values << std::endl;

  // The above is an example of Implicit Type Conversion compiler automatically
  // converts int dtat type to double data type.

  // EXPLICIT TYPE CONVERSION:- converting a value from one data type to another
  // using a cast operator.

  int num = 10;
  double val = static_cast<double>(num);
  std::cout << val << std::endl;

  // USER INPUT:- cin
  int age;
  double salary;
  std::cout << "Enter your age:- ";
  std::cin >> age;
  std::cout << "Enter your salary:- ";
  std::cin >> salary;
  std::cout << "Your salary is:- " << std::endl;
  std::cout << "Your age is:- " << age << std::endl;
  std::cout << "Your salary is:- " << salary << std::endl;

  // UseFul Math Functions

  // std::sqrt()
  double results;
  std::cout << "Enter a number to check its sqaure root:- ";
  std::cin >> results;
  std::cout << "The square root of " << results << "is:- " << std::sqrt(results)
            << std::endl;

  // STD::POW()

  double resultant = std::pow(2, 3);
  std::cout << "The power of 2 to 3 is:- " << resultant << std::endl;

  // STD::ABS() :- converts negatives numbers to positive numbers.

  int resultants = std::abs(-10);
  std::cout << "The absolute value of -10 is:- " << resultants << std::endl;

  // DISTANCE BETWEEN 2 NUMBERS

  int differences = std::abs(2 - 78);
  std::cout << "The distance between 2 and 78 is:- " << differences
            << std::endl;

  // Round:- std::round():- rounds to the nearest integer.

  float roundedNumber = 4.6;
  std::cout << "The. rounded number is:- " << round(roundedNumber)
            << std::endl; // 5

  // CEIL:- always rounds to the nearest integer.

  double ceiledNumber = 4.1;
  std::cout << "the ceiled number is:- " << ceil(ceiledNumber)
            << std::endl; // 5

  // STD::FLOOR:- always rounds down.

  double flooredNumberr = 9.1;
  std::cout << "The downed number is:- " << floor(flooredNumberr)
            << std::endl; // 9

  return 0;
}