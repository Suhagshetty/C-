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

  return 0;
}