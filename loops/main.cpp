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

  // Reversing the number;

  int n = 12345;
  int reverese = 0;
  while (n > 0) {
    int digit = n % 10;
    reverese = reverese * 10 + digit;
    n = n / 10;
  }
  std::cout << "Reversed number is:- " << reverese << std::endl;

  // PALINDROME NUMBER:- A palindrome number is a number that remains the same
  // when its digits are reversed.

  std::cout << "Enter the number to check for Palindrome:- " << std::endl;

  int palindrome;
  std::cin >> palindrome;

  int original = palindrome;
  int rev = 0;

  while (palindrome > 0) {

    int digit = palindrome % 10;

    rev = rev * 10 + digit;

    palindrome = palindrome / 10;
  }

  if (original == rev) {

    std::cout << "Palindrome";

  } else {

    std::cout << "Not a Palindrome";
  }

  return 0;
}