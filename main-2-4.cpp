#include <iostream>

extern int sum_min_max(int[], int);

int main() {
  int integers[] = {1, 2, 3, 4, 5};
  int length = sizeof(integers) / sizeof(integers[0]);

  int result = sum_min_max(integers, length);
  std::cout << "The sum of the minimum and maximum elements is: " << result
            << std::endl;

  return 0;
}