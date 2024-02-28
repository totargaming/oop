#include <iostream>
extern int min_element(int[], int);

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  std::cout << "Minimum of arr1: " << min_element(arr1, 5) << std::endl;

  int arr2[] = {-1, -2, -3, -4, -5};
  std::cout << "Minimum of arr2: " << min_element(arr2, 5) << std::endl;

  int arr3[] = {0, 0, 0, 0, 0};
  std::cout << "Minimum of arr3: " << min_element(arr3, 5) << std::endl;

  std::cout << "Minimum of empty array: " << min_element(arr3, 0) << std::endl;

  return 0;
}