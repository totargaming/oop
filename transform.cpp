#include <cmath>
#include <iostream>

int transform(int dec) {
  int result{}, bear{}, i{};

  while (dec != 0) {
    bear = dec % 2;
    dec = dec / 2;
    result += bear * std::pow(10, i);
    i++;
  }
  return result;
}

int main() {
  std::cout << "Binary of 2 is: " << transform(2) << std::endl;
  std::cout << "Binary of 7 is: " << transform(7) << std::endl;
  std::cout << "Binary of 18 is: " << transform(18) << std::endl;
  std::cout << "Binary of 33 is: " << transform(33) << std::endl;

  return 0;
}
