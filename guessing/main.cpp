#include <iostream>

int main() {

  // Guess the Number Game
  std::srand(std::time(0));

  int secretNumber = std::rand() % 100 + 1;
  int guess;

  std::cout << "Guess the Number between 1 and 100!" << std::endl;
  std::cin >> guess;

  while (guess != secretNumber) {
    if (guess > secretNumber) {
      std::cout << "Too High!";
    } else {
      std::cout << "Too Low!";
    }
    std::cin >> guess;
  }
  std::cout << "Correct! You guessed the right number!" << std::endl;

  return 0;
}