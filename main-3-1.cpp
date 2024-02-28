#include <iostream>

// Your function here
extern bool is_fanarray(int[], int n);

int main() {
  int arr1[] = {1, 2, 3, 2, 1};
  std::cout << "Is arr1 a fan array? " << (is_fanarray(arr1, 5) ? "Yes" : "No")
            << std::endl;

  int arr2[] = {2, 4, 4, 2};
  std::cout << "Is arr2 a fan array? " << (is_fanarray(arr2, 4) ? "Yes" : "No")
            << std::endl;

  int arr3[] = {1, 2, 1, 2, 1};
  std::cout << "Is arr3 a fan array? " << (is_fanarray(arr3, 5) ? "Yes" : "No")
            << std::endl;

  int arr4[] = {1, 3, 5, 4, 2};
  std::cout << "Is arr4 a fan array? " << (is_fanarray(arr4, 5) ? "Yes" : "No")
            << std::endl;

  std::cout << "Is empty array a fan array? "
            << (is_fanarray(arr4, 0) ? "Yes" : "No") << std::endl;

  return 0;
}