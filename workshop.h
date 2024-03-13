#ifndef WORKSHOP_H
#define WORKSHOP_H

#include <iostream>

void changeValue(double* value) { *value = 42; }
void printArray(double* array, int n) {
  while (n-- != 0) {
    std::cout << *(array++) << " ";
  }
  std::cout << std::endl;
}
double arrayMax(double* array, int n) {
  double max{array[0]};
  for (int i = 1; i < n; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}
double* dynamicArray(int n, double M) {
  double* array = new double[n];
  for (int i = 0; i < n; i++) {
    array[i] = M;
  }
  return array;
}

#endif  // !1
