#include <iostream>

int addBinary(int a, int b) {
  int carry;
  while (b != 0) {
    carry = (a & b) << 1;
    a = a ^ b;
    b = carry;
  }
  return a;
}

int subtractBinary(int a, int b) {
  int carry = b;
  while (b != 0) {
    carry = (~a) & b;
    a = a ^ b;
    b = carry << 1;
  }
  return a;
}

int leftShiftBinary(int bin, int shift) { return bin << shift; }

int rightShiftBinary(int bin, int shift) { return bin >> shift; }

int main() {
  int a = 10;  // binary: 1010
  int b = 13;  // binary: 1101

  std::cout << "Addition: " << addBinary(a, b) << std::endl;
  std::cout << "Subtraction: " << subtractBinary(a, b) << std::endl;
  std::cout << "Left Shift: " << leftShiftBinary(a, 2) << std::endl;
  std::cout << "Right Shift: " << rightShiftBinary(a, 2) << std::endl;

  return 0;
}