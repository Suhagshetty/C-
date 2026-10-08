#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

// --------------------------------------------------
// FUNCTION 1: Calculate average performance
// --------------------------------------------------

double calculateAverage(int score1, int score2, int score3) {

  return (score1 + score2 + score3) / 3.0;
}

// --------------------------------------------------
// FUNCTION 2: Determine performance level
// --------------------------------------------------

std::string getPerformanceLevel(double average) {

  if (average >= 90) {
    return "Excellent";
  } else if (average >= 75) {
    return "Good";
  } else if (average >= 50) {
    return "Average";
  } else {
    return "Needs Improvement";
  }
}

// --------------------------------------------------
// FUNCTION 3: Check whether employee passed
// --------------------------------------------------

bool isPassed(double average) { return average >= 50; }

// --------------------------------------------------
// FUNCTION 4: Generate employee ID
// --------------------------------------------------

int generateEmployeeId() { return std::rand() % 9000 + 1000; }

// --------------------------------------------------
// FUNCTION 5: Overloaded function
// --------------------------------------------------

void displayEmployee(std::string name, int id) {

  std::cout << "\nEmployee: " << name << std::endl;
  std::cout << "Employee ID: " << id << std::endl;
}

void displayEmployee(std::string name, int id, double average) {

  std::cout << "\nEmployee: " << name << std::endl;
  std::cout << "Employee ID: " << id << std::endl;
  std::cout << "Average Score: " << average << std::endl;
}

// --------------------------------------------------
// MAIN
// --------------------------------------------------

int main() {

  // Seed random number generator
  std::srand(std::time(0));

  // CONSTANT
  const int MAX_SCORE = 100;

  // VARIABLES
  std::string name;
  int score1;
  int score2;
  int score3;

  // INPUT
  std::cout << "====================================\n";
  std::cout << "   EMPLOYEE PERFORMANCE ANALYZER\n";
  std::cout << "====================================\n";

  std::cout << "Enter employee name: ";
  std::cin >> name;

  std::cout << "Enter score for Project 1: ";
  std::cin >> score1;

  std::cout << "Enter score for Project 2: ";
  std::cin >> score2;

  std::cout << "Enter score for Project 3: ";
  std::cin >> score3;

  // VALIDATION
  if (score1 < 0 || score1 > MAX_SCORE || score2 < 0 || score2 > MAX_SCORE ||
      score3 < 0 || score3 > MAX_SCORE) {

    std::cout << "\nInvalid score entered.\n";
    return 0;
  }

  // FUNCTION CALL
  double average = calculateAverage(score1, score2, score3);

  // FUNCTION CALL
  std::string performance = getPerformanceLevel(average);

  // FUNCTION CALL
  bool passed = isPassed(average);

  // RANDOM EMPLOYEE ID
  int employeeId = generateEmployeeId();

  // TERNARY OPERATOR
  std::string status = passed ? "PASSED" : "FAILED";

  // DISPLAY
  displayEmployee(name, employeeId, average);

  std::cout << "Performance: " << performance << std::endl;
  std::cout << "Status: " << status << std::endl;

  // SWITCH
  std::cout << "\nSelect an action:\n";
  std::cout << "1. Show score details\n";
  std::cout << "2. Show employee ID\n";
  std::cout << "3. Exit\n";

  int choice;
  std::cin >> choice;

  switch (choice) {

  case 1:

    std::cout << "\nScore Details:\n";

    int scores[3] = {score1, score2, score3};

    for (int i = 0; i < 3; i++) {

      std::cout << "Project " << i + 1 << ": " << scores[i] << "/" << MAX_SCORE
                << std::endl;
    }

    break;

  case 2:

    std::cout << "\nEmployee ID: " << employeeId << std::endl;

    break;

  case 3:

    std::cout << "\nExiting program...\n";

    break;

  default:

    std::cout << "\nInvalid choice.\n";
  }

  return 0;
}