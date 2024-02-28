int array_sum(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int sum{};
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  return sum;
}