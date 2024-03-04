#include <iostream>

extern void print_summed(int[3][3], int[3][3]);

int main() {
  int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  int array2[3][3] = {{10, 20, 30}, {40, 50, 60}, {70, 80, 90}};

  print_summed(array1, array2);

  return 0;
}