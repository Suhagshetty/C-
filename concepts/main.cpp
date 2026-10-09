// Lesson 1: Array traversal:-Traversal means visiting each element of an array,
// one by one, to perform some operation.

// TRAVERSAL USING A REGULAR FOR LOOP
#include <iostream>

int main() {
  int marks[5] = {85, 92, 78, 88, 95};
  for (int i = 0; i < 5; i++) {
    std::cout << marks[i] << std::endl;
  }

  // A practical DSA example: calculate the sum

  int numbers[5] = {10, 20, 30, 40, 50};
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += numbers[i];
  }
  std::cout << "Sum:- " << sum << std::endl;

  // Print every element of array

  int array[5] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    std::cout << array[i] << std::endl;
  }

  // COUNT EVEN NUMBRS

  int arr[5] = {2, 3, 4, 5, 6};
  int count = 0;
  for (int i = 0; i < 5; i++) {
    if (arr[i] % 2 == 0) {
      count++;
    }
  }
  std::cout << "The even numbers are:- " << count << std::endl;

  // Largest Number:-

  int arrr[6] = {12, 45, 7, 89, 34, 21};

  int largest = arrr[0];

  for (int i = 1; i < 6; i++) {
    if (arrr[i] > largest) {
      largest = arrr[i];
    }
  }

  std::cout << "Largest element: " << largest << std::endl;

  return 0;
}