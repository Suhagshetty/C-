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

  // Challenge:- 🧠 Challenge: Movie Ticket Booking System 🎬

  std::string MovieName = "Kantara";
  std::string CustomerName = "Suhag";
  char Screen = 'A';
  int NumberOfTickets = 4;
  float TicketPrice = 250.50;
  bool BookingConfirmed = true;

  const double GSTMovie = 0.18;
  int ConvenienceFee = 25;

  double TicketCost = TicketPrice * NumberOfTickets;
  double GSTAmount = TicketCost * GSTMovie;
  double TotalConvenienceFee = ConvenienceFee * NumberOfTickets;
  double Amount = TicketCost + GSTAmount + TotalConvenienceFee;

  std::cout << "======== MOVIE TICKET ==========" << std::endl;

  std::cout << "Movie Name:- " << MovieName << std::endl;
  std::cout << "Customer Name:- " << CustomerName << std::endl;
  std::cout << "Screen:- " << Screen << std::endl;
  std::cout << "Ticket Price:- " << TicketPrice << std::endl;
  std::cout << "Number of Tickets:- " << NumberOfTickets << std::endl;
  std::cout << "Booking Confirmed:- " << std::boolalpha << BookingConfirmed
            << std::endl;

  std::cout << "-------------------------------" << std::endl;

  std::cout << "Ticket Cost:- " << TicketCost << std::endl;
  std::cout << "GST Amount:- " << GSTAmount << std::endl;
  std::cout << "Total Convenience Fee:- " << TotalConvenienceFee << std::endl;
  std::cout << "Total Amount:- " << Amount << std::endl;

  return 0;
}
