#include <iostream>

extern int sum_if_palindrome(int[], int);
int main() {
  int integers[] = {1, 2, 3, 2, 1};
  int length = sizeof(integers) / sizeof(integers[0]);

  int result = sum_if_palindrome(integers, length);
  std::cout << "The result is: " << result << std::endl;

  return 0;
}