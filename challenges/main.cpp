#include <cmath>
#include <iostream>
#include <string>

int main() {
  std::cout << "Hello I am Suhag" << std::endl;
  std::cout << "I am learning c++" << std::endl;
  std::cout << "My goal is DSA" << std::endl;

  // 🧠 Challenge:- Variables
  std::string name = "Suhag S Shetty";
  int age = 23;
  double Salary = 45000.75;
  char Grade = 'A';
  bool Developer = true;
  long long Population = 800000000;
  const double PI = 3.141592653589793;

  std::cout << "My name is :- " << name << std::endl;
  std::cout << "My age is :- " << age << std::endl;
  std::cout << "My salary is :- " << Salary << std::endl;
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

  double SubTotal = Price * Quantity;
  double GST = SubTotal * GSTRate;
  double Total = SubTotal + GST;

  std::cout << "-------BILL-------" << std::endl;
  std::cout << "Product:- " << ProductName << std::endl;
  std::cout << "Category:- " << Category << std::endl;
  std::cout << "Quantity:- " << Quantity << std::endl;
  std::cout << "Price:- " << Price << std::endl;
  std::cout << "In Stock:- " << std::boolalpha << InStock << std::endl;
  std::cout << "--------------" << std::endl;
  std::cout << "SubTotal:- " << SubTotal << std::endl;
  std::cout << "GST:- " << GST << std::endl;
  std::cout << "Total:- " << Total << std::endl;

  // 🧠 Challenge:- Movie Ticket Booking System 🎬
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

  // 🏏 Match Stats
  using ll = long long;

  std::string PlayerName = "Virat Kohli";
  int RunsScore = 137;
  int BallsFaced = 92;
  int Fours = 11;
  int Sixes = 4;
  double StrikeRate = (static_cast<double>(RunsScore) / BallsFaced) * 100;
  ll CareerRuns = 18000000000;
  const int RUNS_PER_FOUR = 4;
  const int RUNS_PER_SIX = 6;
  int BoundaryRuns = (Fours * RUNS_PER_FOUR) + (Sixes * RUNS_PER_SIX);

  std::cout << "===== MATCH STATS =====" << std::endl;
  std::cout << "Player Name:- " << PlayerName << std::endl;
  std::cout << "Runs:- " << RunsScore << std::endl;
  std::cout << "Balls:- " << BallsFaced << std::endl;
  std::cout << "Fours:- " << Fours << std::endl;
  std::cout << "Sixes:- " << Sixes << std::endl;
  std::cout << "Boundary Runs:- " << BoundaryRuns << std::endl;
  std::cout << "Strike Rate:- " << StrikeRate << std::endl;
  std::cout << "Career Runs:- " << CareerRuns << std::endl;

  // 🎯 Challenge 1 — User Profile
  std::string Name;
  int Currentage;
  double salary;
  char grade;
  bool Develop;

  std::cout << "Name:- ";
  std::getline(std::cin, Name); // reads the full line, spaces included
  std::cout << "Age:- ";
  std::cin >> Currentage;
  std::cout << "Salary:- ";
  std::cin >> salary;
  std::cout << "Grade:- ";
  std::cin >> grade;
  std::cout << "Developer (1 = yes, 0 = no):- ";
  std::cin >> Develop;

  std::cout << "\n--- Profile ---" << std::endl;
  std::cout << "Name:- " << Name << std::endl;
  std::cout << "Age:- " << Currentage << std::endl;
  std::cout << "Salary:- " << salary << std::endl;
  std::cout << "Grade:- " << grade << std::endl;
  std::cout << "Developer:- " << std::boolalpha << Develop << std::endl;

  // 🧠 Hypotenuse Calculator
  double a, b;
  std::cout << "\nEnter side A:- ";
  std::cin >> a;
  std::cout << "Enter side B:- ";
  std::cin >> b;
  double hypotenuse = std::sqrt(a * a + b * b);
  std::cout << "The hypotenuse of A and B is " << hypotenuse << std::endl;

  return 0;
}