#include <iostream>
extern int max_element(int[], int);

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  std::cout << "Maximum of arr1: " << max_element(arr1, 5) << std::endl;

  int arr2[] = {-1, -2, -3, -4, -5};
  std::cout << "Maximum of arr2: " << max_element(arr2, 5) << std::endl;

  int arr3[] = {0, 0, 0, 0, 0};
  std::cout << "Maximum of arr3: " << max_element(arr3, 5) << std::endl;

  std::cout << "Maximum of empty array: " << max_element(arr3, 0) << std::endl;

  return 0;
}