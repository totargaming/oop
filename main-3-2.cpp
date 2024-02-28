#include <iostream>
extern int median_array(int[], int);
int main() {
  int arr1[] = {3, 5, 2, 1, 4};
  std::cout << "Median of arr1 is: " << median_array(arr1, 5) << std::endl;

  int arr2[] = {2, 4, 6, 8};
  std::cout << "Median of arr2 is: " << median_array(arr2, 4) << std::endl;

  int arr3[] = {1, 2, 3, 4, 5, 6};
  std::cout << "Median of arr3 is: " << median_array(arr3, 6) << std::endl;

  std::cout << "Median of empty array is: " << median_array(arr3, 0)
            << std::endl;

  return 0;
}