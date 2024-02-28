#include <iostream>
extern void check_grade(char);

int main() {
  check_grade('A');  // Outputs: Pass
  check_grade('B');  // Outputs: Pass
  check_grade('C');  // Outputs: Pass
  check_grade('D');  // Outputs: Fail
  check_grade('E');  // Outputs: Fail
  check_grade('F');  // Outputs: Nothing

  return 0;
}