double sum_even(double array[], int n) {
  if (n < 1) {
    return 0;
  }
  int sum{};
  for (int i = 0; i < n; i += 2) {
    sum += array[i];
  }
  return static_cast<double>(sum);
}