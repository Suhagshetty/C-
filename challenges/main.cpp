#include <iostream>
#include <string>
int main() {
  std::cout << "Hello I am Suhag" << std::endl;
  std::cout << "I am learning c++" << std::endl;
  std::cout << "My goal is DSA" << std::endl;

  // 🧠 Challenge:-

  std::string name = "Suhag S Shetty";
  int age = 23;
  double Salary = 45000.75;
  char Grade = 'A';
  bool Developer = true;
  long long Population = 800000000;
  const double PI = 3.141592653589793;

  std::cout << "My name is :-" << name << std::endl;
  std::cout << "My age is :- " << age << std::endl;
  std::cout << "My salary is :-" << Salary << std::endl;
  std::cout << "My Grade is :- " << Grade << std::endl;
  std::cout << "I am a Developer:- " << Developer << std::endl;
  std::cout << "The population of India is :- " << Population << std::endl;
  std::cout << "The value of PI is:- " << PI << std::endl;

  // 🧠 Challenge:- Shopping Bill 🛒
  std::string ProductName = "Mechanical Keyboard";
  int Quantity = 2;
  double Price = 2499.50;
  char Category = 'A';
  bool InStock = true;

  const double GSTRate = 0.18;

  double SubTotl = Price * Quantity;
  double GST = SubTotl * GSTRate;
  double Total = SubTotl + GST;

  std::cout << "-------BILL-------" << std::endl;

  std::cout << "Product:- " << ProductName << std::endl;
  std::cout << "Category:- " << Category << std::endl;
  std::cout << "Quantity:- " << Quantity << std::endl;
  std::cout << "Price:- " << Price << std::endl;
  std::cout << "IN Stock:- " << std::boolalpha << InStock << std::endl;
  std::cout << "--------------" << std::endl;

  std::cout << "SubTotal:- " << SubTotl << std::endl;
  std::cout << "GST:- " << GST << std::endl;
  std::cout << "Total:- " << Total << std::endl;

  return 0;
}
