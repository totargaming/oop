double array_mean(int array[], int n) {
  if (n < 1) {
    return 0.0;
  }
  double sum{};
  for (int i{}; i < n; i++) {
    sum += static_cast<double>(array[i]);
  }
  return sum / static_cast<double>(n);
}