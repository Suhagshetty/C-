// Arrays:-An array stores multiple values of the same data type under one
// variable name.

#include <iostream>

int scores[5] = {85, 92, 78, 88, 95};
int main() {
  std::cout << "Scores at index 0 is:- " << scores[0] << std::endl;
  std::cout << "Scores at index 1 is:- " << scores[1] << std::endl;
  std::cout << "Scores at index 2 is:- " << scores[2] << std::endl;
  std::cout << "Scores at index 3 is:- " << scores[3] << std::endl;
  std::cout << "Scores at index 4 is:- " << scores[4] << std::endl;

  // READING ARRAY ELEMENST
  std::cout << "Score at index 2 is:- " << scores[2] << std::endl;

  // Updating array elements
  scores[3] = 91;
  std::cout << "The updated acore of index 3 is:- " << scores[3] << std::endl;

  // PROGRAM TO FIND LARGEST ELEMENT IN THE ARRAY:-
  int numbers[5] = {45, 67, 99, 34, 78};
  int largest = numbers[0];
  for (int i = 1; i < 5; i++) {
    if (numbers[i] > largest) {
      largest = numbers[i];
    }
  }
  std::cout << "The largest number in the array is:- " << largest << std::endl;

  // THE SIZE OF OPERATOR:- tells us how much memort a variable or data type
  // occupies in bytes.

  int age = 23;
  double salary = 45000.75;
  char grade = 'A';

  std::cout << sizeof(age) << std::endl;
  std::cout << sizeof(salary) << std::endl;
  std::cout << sizeof(grade) << std::endl;

  // size of operator to check for space present in the array

  int scoreArry[4] = {1, 2, 3, 45};
  std::cout << "The size of elements in our array is:- "
            << sizeof(scoreArry[0]) + sizeof(scoreArry[1]) +
                   sizeof(scoreArry[2]) + sizeof(scoreArry[3])
            << std::endl;

  // Calculate the sum and average:-

  int marks[5] = {85, 92, 78, 88, 95};
  int sum = 0;
  int n = sizeof(marks) / sizeof(marks[0]);

  for (int i = 0; i < n; i++) {
    sum += marks[i];
  }
  double average = static_cast<double>(sum) / n;
  std::cout << "The sum of the marks is:- " << sum << std::endl;
  std::cout << "The average of the marks is:- " << average << std::endl;

  return 0;
}