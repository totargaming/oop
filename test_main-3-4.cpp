extern void print_pass_fail(char);
int main() {
  print_pass_fail('A');  // Outputs: Pass
  print_pass_fail('B');  // Outputs: Pass
  print_pass_fail('C');  // Outputs: Pass
  print_pass_fail('D');  // Outputs: Fail
  print_pass_fail('E');  // Outputs: Fail
  print_pass_fail('F');  // Outputs: Nothing

  // Additional test cases
  print_pass_fail('G');  // Outputs: Nothing
  print_pass_fail('H');  // Outputs: Nothing
  print_pass_fail('I');  // Outputs: Nothing
  print_pass_fail('J');  // Outputs: Nothing
  print_pass_fail('K');  // Outputs: Nothing

  return 0;
}