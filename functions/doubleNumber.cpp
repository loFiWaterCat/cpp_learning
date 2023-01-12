#include <iostream>

// Write a function that takes an integer and returns double the value of the parameter
int doubleNumber(int x) {
  return x * 2;
}

int main() {

  std::cout << "Enter a number to double." << '\n';
  
  int x;
  std::cin >> x;
  std::cout << doubleNumber(x) << '\n';
  return 0;
}
