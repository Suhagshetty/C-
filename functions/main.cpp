#include <iostream>

void sayHello() {
  std::cout << "Hello from user defined functions!" << std::endl;
}

void Introduce(std::string name, int age) {
  std::cout << "Hello my name is " << name << " I am " << age << "years old."
            << std::endl;
}

// THE RETURN KEYBOARD

int add(int a, int b) { return a + b; }

int main() {

  // A function is simply a block of code that performs a specific task.You
  // don't want everything inside main().

  sayHello();
  Introduce("Suhag", 23);
  std::cout << "The sum of 5 and 12 is: " << add(5, 12) << std::endl;

  return 0;
}
