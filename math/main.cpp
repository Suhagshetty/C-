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

  return 0;
}