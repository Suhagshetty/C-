#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {

  // Random Number Generator 🎲:-C++ provides random-number
  // functionality.through <cstdlib> and <ctime> in beginner-level code.

  std::srand(std::time(0));
  int number = std::rand() % 100 + 1;
  std::cout << number << std::endl;

  // Random Event Generator 🎁

  std::srand(std::time(0));
  int event = std::rand() % 3 + 1;
  switch (event) {
  case 1:
    std::cout << "Attack" << std::endl;
    break;

  case 2:
    std::cout << "Defend" << std::endl;
    break;

  case 3:
    std::cout << "Heal" << std::endl;
    break;
  }

  return 0;
}
