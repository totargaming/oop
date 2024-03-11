
#include <iostream>

#include "workshop.h"
int main() {
  double myValue = 10;
  std::cout << "Initial value: " << myValue << std::endl;
  changeValue(&myValue);
  std::cout << "Value after change: " << myValue << std::endl;
  double myArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  int size = sizeof(myArray) / sizeof(myArray[0]);
  printArray(myArray, size);
  double max = arrayMax(myArray, size);
  std::cout << "The maximum value in the array is: " << max << std::endl;
  size = 5;
  double initValue = 7.7;
  double* newarray = dynamicArray(size, initValue);
  printArray(newarray, size);
  delete[] newarray;  // Don't forget to delete the dynamically allocated array

  return 0;
}