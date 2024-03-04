#include <math.h>

#include <iostream>

extern int binary_to_int(int[], int);

int main() {
  int binary_digits[] = {1, 0, 0, 1, 0};
  int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);

  int result = binary_to_int(binary_digits, number_of_digits);
  std::cout << "The integer representation of the binary number is: " << result
            << std::endl;

  return 0;
}