int max_element(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int max{array[0]};
  for (int i = 1; i < n; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}
double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int count[max_element(array, n) + 1] = {0};
  double avg{};
  for (int i = 0; i < n; i++) {
    count[array[i]] += 1;
  }
  for (int i = 0; i < n; i++) {
    avg += array[i] * count[array[i]];
  }

  return avg / static_cast<double>(n);
}
