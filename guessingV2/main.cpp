#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  std::srand(std::time(0));

  int number = std::rand() % 50 + 1;
  int guess;
  int attempt = 0;

  std::cout << "Welcome to the number guessing game! Choose a number between 1 "
               "and 50:"
            << std::endl;

  do {
    std::cout << "Enter your guess: ";
    std::cin >> guess;
    attempt++;

    if (guess > number) {
      std::cout << "Too High!" << std::endl;
    } else if (guess < number) {
      std::cout << "Too Low!" << std::endl;
    }
  } while (guess != number);

  std::cout << "Correct! You guessed the right number!" << std::endl;
  std::cout << "Total attempts: " << attempt << std::endl;

  return 0;
}