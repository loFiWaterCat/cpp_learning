// Write a program that asks the user for 2 numbers. The program will tell the sum and the difference between the two.

#include <iostream>

int main() {
  // Take integers
  std::cout << "Enter an integer: ";
  int x;
  std::cin >> x;

  std::cout << "Another one please: ";
  int y;
  std::cin >> y;

  std::cout << "The sum: " << x + y << '\n';
  std::cout << "The difference: " << x - y << '\n';

  
}
