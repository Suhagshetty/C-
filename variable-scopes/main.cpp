// Scope = the part of your program where a variable exists and can be accessed.

#include <iostream>
int score = 100;
// score is a global variable.
void display() { std::cout << score; }
int main() {
  std::cout << score;
  display();
  return 0;
}