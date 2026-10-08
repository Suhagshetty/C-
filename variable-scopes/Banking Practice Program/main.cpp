// Banking Practice Program

#include <iostream>
#include <limits>

void showBalance(double Balance) {
  std::cout << "\n Current Balance: $ " << Balance << std::endl;
}

double deposit(double Balance) {
  double Amount;
  std::cout << "Enter the deposit amount:- ";

  if (!(std::cin >> Amount)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid Number!" << std::endl;
    return Balance;
  }

  if (Amount > 0) {
    Balance += Amount;
    std::cout << "Deposit successful! " << std::endl;
  } else {
    std::cout << "Invalid Number!" << std::endl;
  }
  return Balance;
}

double withdraw(double Balance) {
  double Amount;

  std::cout << "Enter the withdrawal amount:- ";

  if (!(std::cin >> Amount)) {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid Amount" << std::endl;
    return Balance;
  }

  if (Amount <= 0) {
    std::cout << "Invalid Amount" << std::endl;
  } else if (Amount > Balance) {
    std::cout << "Insufficient Balance" << std::endl;
  } else {
    Balance -= Amount;
    std::cout << "Withdrawal Successful" << std::endl;
  }
  return Balance;
}

int main() {
  double Balance = 1000.00;
  int choice;
  bool running = true;

  std::cout << "============================\n";
  std::cout << "      MY BANKING APP\n";
  std::cout << "============================\n";

  while (running) {
    std::cout << "\n1. Show Balance\n";
    std::cout << "2. Deposit\n";
    std::cout << "3. Withdraw\n";
    std::cout << "4. Exit\n";

    std::cout << "\nChoose an option: ";

    // Check if input reading failed (e.g., user entered letters)
    if (!(std::cin >> choice)) {
      std::cin.clear(); // Clear input stream error flags
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                      '\n'); // Discard bad input
      std::cout << "Invalid input! Please enter a number.\n";
      continue;
    }

    switch (choice) {
    case 1:
      showBalance(Balance);
      break;

    case 2:
      Balance = deposit(Balance);
      break;

    case 3:
      Balance = withdraw(Balance);
      break;

    case 4:
      running = false;
      std::cout << "Thank you for using My Banking App!" << std::endl;
      break;

    default:
      std::cout << "Invalid choice!" << std::endl;
    }
  }
  return 0;
}