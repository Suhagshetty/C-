#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  std::srand(std::time(0));

  int userChoice;
  int computerChoice;
  bool isPlaying = true;

  while (isPlaying) {
    std::cout << "\n============================\n";
    std::cout << "    ROCK PAPER SCISSORS\n";
    std::cout << "============================\n";
    std::cout << "1. Rock\n";
    std::cout << "2. Paper\n";
    std::cout << "3. Scissors\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose: ";

    std::cin >> userChoice;

    if (userChoice == 4) {
      isPlaying = false;
      std::cout << "Thanks for playing!\n";
      continue;
    }

    if (userChoice < 1 || userChoice > 3) {
      std::cout << "Invalid choice!\n";
      continue;
    }

    computerChoice = std::rand() % 3 + 1;

    std::cout << "Computer choice: " << computerChoice << '\n';

    if (userChoice == computerChoice) {
      std::cout << "DRAW!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
      std::cout << "YOU WIN!\n";
    } else {
      std::cout << "YOU LOSE!\n";
    }
  }

  return 0;
}