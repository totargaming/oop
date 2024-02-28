#include <iostream>

extern int array_sum(int[], int);

int main() {
  int array[] = {1, 2, 3, 4, 5};
  int size = sizeof(array) / sizeof(array[0]);
  int result = array_sum(array, size);
  std::cout << "Sum: " << result << std::endl;
  return 0;
}
