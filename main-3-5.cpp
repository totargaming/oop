#include <iostream>

// Your function here
extern double sum_even(double[], int);

int main() {
  double arr1[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
  std::cout << "Sum of even-indexed elements in arr1 is: " << sum_even(arr1, 6)
            << std::endl;

  double arr2[] = {2.0, 4.0, 6.0, 8.0};
  std::cout << "Sum of even-indexed elements in arr2 is: " << sum_even(arr2, 4)
            << std::endl;

  double arr3[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0};
  std::cout << "Sum of even-indexed elements in arr3 is: " << sum_even(arr3, 7)
            << std::endl;

  std::cout << "Sum of even-indexed elements in empty array is: "
            << sum_even(arr3, 0) << std::endl;

  return 0;
}