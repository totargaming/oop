#include <iostream>

int array_sum(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int sum{};
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  return sum;  // Add return statement here
}

int main() {
  // Test case 1: Empty array
  int arr1[] = {};
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int result1 = array_sum(arr1, n1);
  std::cout << "Sum of array1: " << result1 << std::endl;  // Expected output: 0

  // Test case 2: Array with positive numbers
  int arr2[] = {1, 2, 3, 4, 5};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int result2 = array_sum(arr2, n2);
  std::cout << "Sum of array2: " << result2
            << std::endl;  // Expected output: 15

  // Test case 3: Array with negative numbers
  int arr3[] = {-1, -2, -3, -4, -5};
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  int result3 = array_sum(arr3, n3);
  std::cout << "Sum of array3: " << result3
            << std::endl;  // Expected output: -15

  // Test case 4: Array with both positive and negative numbers
  int arr4[] = {-1, 2, -3, 4, -5};
  int n4 = sizeof(arr4) / sizeof(arr4[0]);
  int result4 = array_sum(arr4, n4);
  std::cout << "Sum of array4: " << result4
            << std::endl;  // Expected output: -3

  return 0;
}