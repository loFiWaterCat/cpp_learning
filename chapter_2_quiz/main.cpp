#include "io.h"
#include <iostream>

int main() {
  int x;
  int y;

  x = getNumber();
  y = getNumber();

  writeAnswer(x + y);
  
  return 0;
}

