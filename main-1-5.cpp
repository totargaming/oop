#include <iostream>
extern int count_evens(int);
int main() {
  std::cout << "Count of even numbers between 1 and 10: " << count_evens(10)
            << std::endl;
  std::cout << "Count of even numbers between 1 and 5: " << count_evens(5)
            << std::endl;
  std::cout << "Count of even numbers between 1 and 0: " << count_evens(0)
            << std::endl;
  std::cout << "Count of even numbers between 1 and -5: " << count_evens(-5)
            << std::endl;

  return 0;
}