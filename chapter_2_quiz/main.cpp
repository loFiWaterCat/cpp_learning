#include <iostream>

int getNumber();
void writeAnswer(int x);

int main() {
  int x;
  int y;

  x = getNumber();
  y = getNumber();

  writeAnswer(x + y);
  
  return 0;
}

int getNumber() {
  int x;

  std::cout << "Enter a number." << '\n';
  std::cin >> x;
  
  return x;
}

void writeAnswer(int x) {
  std::cout << "The answer is " << x << '\n';
}
