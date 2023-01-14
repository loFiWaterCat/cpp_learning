#include "io.h"
#include <iostream>

int getNumber() {
  int x;
  std::cout << "Enter a number." << '\n';
  std::cin >> x;
  
  return x;
}

void writeAnswer(int x) {
  std::cout << "The answer is " << x << '\n';
}
