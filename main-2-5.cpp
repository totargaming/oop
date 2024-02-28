#include <iostream>

extern bool is_descending(int[], int);
int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  std::cout << "Is arr1 descending? " << (is_descending(arr1, 5) ? "Yes" : "No")
            << std::endl;

  int arr2[] = {5, 4, 3, 2, 1};
  std::cout << "Is arr2 descending? " << (is_descending(arr2, 5) ? "Yes" : "No")
            << std::endl;

  int arr3[] = {1, 2, 3, 5, 4};
  std::cout << "Is arr3 descending? " << (is_descending(arr3, 5) ? "Yes" : "No")
            << std::endl;

  std::cout << "Is empty array descending? "
            << (is_descending(arr3, 0) ? "Yes" : "No") << std::endl;

  return 0;
}