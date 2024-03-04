#include <iostream>

extern int is_identity(int[10][10]);
int main() {
  int array[10][10] = {0};
  for (int i = 0; i < 10; i++) {
    array[i][i] = 1;
  }

  int result = is_identity(array);
  if (result == 1) {
    std::cout << "The matrix is an identity matrix." << std::endl;
  } else {
    std::cout << "The matrix is not an identity matrix." << std::endl;
  }

  return 0;
}