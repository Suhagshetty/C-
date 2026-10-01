#include <iostream>
int main() {
  // The while loop:-A loop allows you to execute code repeatedly.

  int i = 1;
  while (i <= 5) {
    std::cout << i << std::endl;
    i++;
  }

  // The for loop:- is a loop that allows you to execute code repeatedly for a
  // specific number of times.

  for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
  }

  // DSA STYLE EXAMPLES:-

  // CALCULATE NUMBER OF A IN THE STRING.

  std::string fruit = "banana";
  int count = 0;
  for (int i = 0; i < fruit.length(); i++) {
    if (fruit[i] == 'a') {
      count++;
    }
  }
  std::cout << count;

  // LARGEST NUMBER USINH A LOOP

  int array[] = {10, 5, 30, 8, 20};
  int largest = array[0];

  for (int i = 0; i < 5; i++) {
    if (array[i] > largest) {
      largest = array[i];
    }
  }
  std::cout << "The largest number in the array is:-" << largest << std::endl;

  return 0;
}