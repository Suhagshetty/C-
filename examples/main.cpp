#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {

  // Random Number Generator 🎲:-C++ provides random-number functionality
  // through <cstdlib> and <ctime> in beginner-level code.

  std::srand(std::time(0));
  int number = std::rand() % 100 + 1;
  std::cout << number << std::endl;
  return 0;
}
