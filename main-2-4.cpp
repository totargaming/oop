#include <iostream>

extern bool is_ascending(int[], int);
int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  std::cout << "Is arr1 ascending? " << (is_ascending(arr1, 5) ? "Yes" : "No")
            << std::endl;

  int arr2[] = {5, 4, 3, 2, 1};
  std::cout << "Is arr2 ascending? " << (is_ascending(arr2, 5) ? "Yes" : "No")
            << std::endl;

  int arr3[] = {1, 2, 3, 5, 4};
  std::cout << "Is arr3 ascending? " << (is_ascending(arr3, 5) ? "Yes" : "No")
            << std::endl;

  std::cout << "Is empty array ascending? "
            << (is_ascending(arr3, 0) ? "Yes" : "No") << std::endl;

  return 0;
}