#include <iostream>
extern void two_five_nine(int[], int);
int main() {
  int arr1[] = {2, 2, 2, 5, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
  two_five_nine(arr1, 15);

  int arr2[] = {1, 3, 4, 6, 7, 8, 0};
  two_five_nine(arr2, 7);

  two_five_nine(arr2, 0);

  return 0;
}