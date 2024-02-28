#include <iostream>

// Your function here
extern int num_count(int[], int, int);

int main() {
  int arr1[] = {1, 2, 3, 4, 5, 1, 1};
  std::cout << "Count of 1 in arr1: " << num_count(arr1, 7, 1) << std::endl;

  int arr2[] = {-1, -2, -3, -4, -5, -1, -1};
  std::cout << "Count of -1 in arr2: " << num_count(arr2, 7, -1) << std::endl;

  int arr3[] = {0, 0, 0, 0, 0, 0, 0};
  std::cout << "Count of 0 in arr3: " << num_count(arr3, 7, 0) << std::endl;

  return 0;
}