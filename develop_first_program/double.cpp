#include <iostream>

int main() {
  std::cout << "Enter an integer: ";

  int num; // define variable num as an integer variable
  std::cin >> num; // get integer value from user's keyboard

  int doublenum = num * 2;
  std::cout << "Double that number is" << doublenum << '\n';

  std::cout << "And triple is " << num * 3 << '\n';
  
  return 0;
}
