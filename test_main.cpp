#include <iostream>
extern int count(int[], int);

void test_count() {
  // Test case 1: Empty array
  int array1[] = {};
  int n1 = 0;
  int expected1 = 0;
  int result1 = count(array1, n1);
  std::cout << "Test case 1: " << (result1 == expected1 ? "Passed" : "Failed")
            << std::endl;

  // Test case 2: Array with all even numbers
  int array2[] = {2, 4, 6, 8, 10};
  int n2 = 5;
  int expected2 = 30;
  int result2 = count(array2, n2);
  std::cout << "Test case 2: " << (result2 == expected2 ? "Passed" : "Failed")
            << std::endl;

  // Test case 3: Array with all odd numbers
  int array3[] = {1, 3, 5, 7, 9};
  int n3 = 5;
  int expected3 = 0;
  int result3 = count(array3, n3);
  std::cout << "Test case 3: " << (result3 == expected3 ? "Passed" : "Failed")
            << std::endl;

  // Test case 4: Array with mixed even and odd numbers
  int array4[] = {1, 2, 3, 4, 5};
  int n4 = 5;
  int expected4 = 6;
  int result4 = count(array4, n4);
  std::cout << "Test case 4: " << (result4 == expected4 ? "Passed" : "Failed")
            << std::endl;
}

int main() {
  test_count();
  return 0;
}