#include <iostream>
extern int sum_two_arrays(int[], int[], int);
int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {6, 7, 8, 9, 10};
  std::cout << "Sum of arr1 and arr2: " << sum_two_arrays(arr1, arr2, 5)
            << std::endl;

  int arr3[] = {-1, -2, -3, -4, -5};
  int arr4[] = {-6, -7, -8, -9, -10};
  std::cout << "Sum of arr3 and arr4: " << sum_two_arrays(arr3, arr4, 5)
            << std::endl;

  int arr5[] = {0, 0, 0, 0, 0};
  int arr6[] = {0, 0, 0, 0, 0};
  std::cout << "Sum of arr5 and arr6: " << sum_two_arrays(arr5, arr6, 5)
            << std::endl;

  return 0;
}