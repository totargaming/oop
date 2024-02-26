int count(int array[], int n) {
  int sum{};
  for (int i = 0; i < n; i++) {
    if (array[i] % 2 == 0) {
      sum += array[i];
    }
  }
  return sum;
}
