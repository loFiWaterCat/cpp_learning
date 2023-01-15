#include <string>
#include <iostream>

int main() {

  std::cout << "Enter your name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name); // reads the entire line into our name variable

  std::cout << "Enter your age: ";
  std::string age;
  std::getline(std::cin >> std::ws, age);

  std::cout << "Your name is " << name << " and your age is " << age << "\n";

  return 0;
}
