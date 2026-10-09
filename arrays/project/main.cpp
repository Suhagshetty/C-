
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

// Function 1: Calculate average score
double calculateAverage(const int scores[], int size) {
  int sum = 0;

  for (int i = 0; i < size; i++) {
    sum += scores[i];
  }

  return static_cast<double>(sum) / size;
}

// Function 2: Find the highest score
int findHighestScore(const int scores[], int size) {
  int highest = scores[0];

  for (int i = 1; i < size; i++) {
    if (scores[i] > highest) {
      highest = scores[i];
    }
  }

  return highest;
}

// Function 3: Determine performance level
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

// Function 4: Check whether the employee passed
bool isPassed(double average) { return average >= 50; }

// Function 5: Generate a sample employee ID
int generateEmployeeId() { return std::rand() % 9000 + 1000; }

// Function overloading: Basic employee details
void displayEmployee(std::string name, int id) {
  std::cout << "\nEmployee: " << name << '\n';
  std::cout << "Employee ID: " << id << '\n';
}

// Overloaded version: Details plus average
void displayEmployee(std::string name, int id, double average) {
  displayEmployee(name, id);

  std::cout << "Average score: " << average << '\n';
}

int main() {
  std::srand(static_cast<unsigned int>(std::time(nullptr)));

  const int MAX_SCORE = 100;

  int scores[5];
  const int size = sizeof(scores) / sizeof(scores[0]);

  std::string name;

  std::cout << "=== EMPLOYEE PERFORMANCE ANALYTICS ===\n";
  std::cout << "Enter employee name (one word): ";
  std::cin >> name;

  // Collect and validate scores
  for (int i = 0; i < size; i++) {
    std::cout << "Enter project " << i + 1 << " score: ";
    std::cin >> scores[i];

    if (scores[i] < 0 || scores[i] > MAX_SCORE) {
      std::cout << "Invalid score. Enter a value from 0 to 100.\n";
      return 1;
    }
  }

  // Call our functions
  double average = calculateAverage(scores, size);
  int highest = findHighestScore(scores, size);
  std::string level = getPerformanceLevel(average);
  bool passed = isPassed(average);
  int employeeId = generateEmployeeId();

  // Ternary operator
  std::string status = passed ? "PASSED" : "NOT PASSED";

  // Display the full report
  std::cout << "\n========== EMPLOYEE REPORT ==========\n";

  displayEmployee(name, employeeId, average);

  std::cout << "Name length: " << name.length() << '\n';
  std::cout << "Highest score: " << highest << '\n';
  std::cout << "Performance: " << level << '\n';
  std::cout << "Status: " << status << '\n';

  // Menu using while and switch
  bool running = true;

  while (running) {
    std::cout << "\n1. View project scores\n";
    std::cout << "2. View basic employee details\n";
    std::cout << "3. Exit\n";
    std::cout << "Choose an option: ";

    int choice;
    std::cin >> choice;

    switch (choice) {
    case 1:
      for (int i = 0; i < size; i++) {
        std::cout << "Project " << i + 1 << ": " << scores[i] << "/"
                  << MAX_SCORE << '\n';
      }
      break;

    case 2:
      displayEmployee(name, employeeId);
      break;

    case 3:
      running = false;
      std::cout << "Exiting analytics system.\n";
      break;

    default:
      std::cout << "Invalid menu choice.\n";
    }
  }

  return 0;
}