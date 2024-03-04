#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
  int dec = std::stoi(decimal_number);
  std::string res;
  while (dec != 0) {
    res = std::to_string(dec % 2) + res;
    dec /= 2;
  }
  std::cout << res << std::endl;
}