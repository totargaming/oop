#include <iostream>
extern void count_numbers(int[], int);
int main() {
  int arr1[] = {2, 2, 2, 5, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
  count_numbers(arr1, 15);

  int arr2[] = {1, 3, 4, 6, 7, 8, 0};
  count_numbers(arr2, 7);

  count_numbers(arr2, 0);

  return 0;
}