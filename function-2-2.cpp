#include <math.h>

int binary_to_int(int binary_digits[], int number_of_digits) {
  int res{};

  for (int i = number_of_digits - 1; i >= 0; i++) {
    res += binary_digits[i] * std::pow(2, number_of_digits - i - 1);
  }
  return res;
}