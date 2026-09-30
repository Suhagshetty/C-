#include <iostream>
#include <string>
int main() {
  // String is a sequence of characters and we have many options to manipulate
  // them in C++.

  // Length:- is number of characters in a string.

  std::string name = "Suhag";
  std::cout << "Length of string is :- " << name.length() << std::endl;

  // Size is same as length.

  std::cout << name.size() << std::endl;

  // Change the string
  // You can change individual characters in a string by using the index.
  // Note: The index is zero-based, so the first character is at index 0.
  name[0] = 'R';
  std::cout << "Manipulated string is " << name << std::endl;

  // The at() function is used to access individual characters in a string.
  // It is similar to using the index, but it provides bounds checking.

  std::string name1 = "Shetty";
  std::cout << name.at(2) << std::endl; // 2

  // Empty():- not empty is the answer for below

  std::string name2 = "Suhag";
  if (name2.empty()) {
    std::cout << "String is empty" << std::endl;
  } else {
    std::cout << "not empty" << std::endl;
  }

  // FIND():- 6

  std::string name4 = "Suhag Shetty";
  std::cout << name4.find("Shetty") << std::endl;

  return 0;
}