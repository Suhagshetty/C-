#include <iostream>

void sayHello() {
  std::cout << "Hello from user defined functions!" << std::endl;
}
void Intro(std::string name) { std::cout << "Hello! " << name << std::endl; }

int main() {

  // A function is simply a block of code that performs a specific task.You
  // don't want everything inside main().

  sayHello();
  Intro("Suhag");

  return 0;
}
