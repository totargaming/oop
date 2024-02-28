#include <iostream>
extern void print_pass_fail(char);

int main() {
  print_pass_fail('A');  // Outputs: Pass
  print_pass_fail('B');  // Outputs: Pass
  print_pass_fail('C');  // Outputs: Pass
  print_pass_fail('D');  // Outputs: Fail
  print_pass_fail('E');  // Outputs: Fail
  print_pass_fail('F');  // Outputs: Nothing

  return 0;
}