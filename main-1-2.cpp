#include <iostream>

// Your function here
extern double array_mean(int[], int);
int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  std::cout << "Mean of arr1: " << array_mean(arr1, 5) << std::endl;

  int arr2[] = {-1, -2, -3, -4, -6};
  std::cout << "Mean of arr2: " << array_mean(arr2, 5) << std::endl;

  int arr3[] = {};
  std::cout << "Mean of arr3: " << array_mean(arr3, 0) << std::endl;

  return 0;
}