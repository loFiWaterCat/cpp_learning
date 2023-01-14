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

