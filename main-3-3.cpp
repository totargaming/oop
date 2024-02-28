#include <iostream>
extern int max_element(int[], int);
extern double weighted_average(int[], int);

int main() {
  int arr1[] = {1, 2, 1, 4, 1, 3};
  std::cout << "Max of arr1 is: " << max_element(arr1, 6) << std::endl;
  std::cout << "Weighted average of arr1 is: " << weighted_average(arr1, 6)
            << std::endl;

  int arr2[] = {2, 4, 6, 8};
  std::cout << "Max of arr2 is: " << max_element(arr2, 4) << std::endl;
  std::cout << "Weighted average of arr2 is: " << weighted_average(arr2, 4)
            << std::endl;

  int arr3[] = {1, 2, 3, 4, 5, 6};
  std::cout << "Max of arr3 is: " << max_element(arr3, 6) << std::endl;
  std::cout << "Weighted average of arr3 is: " << weighted_average(arr3, 6)
            << std::endl;

  std::cout << "Max of empty array is: " << max_element(arr3, 0) << std::endl;
  std::cout << "Weighted average of empty array is: "
            << weighted_average(arr3, 0) << std::endl;

  return 0;
}