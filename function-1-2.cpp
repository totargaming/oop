int is_identity(int array[10][10]) {
  for (int i = 0; i < 10; i++) {
    if (array[i][i] != 1) {
      return 0;
    }
    int sum{};
    for (int j = 0; j < 10; j++) {
      if (i != j) {
        sum += array[i][j];
      }
    }
    if (sum != 0) {
      return 0;
    }
  }
  return 1;
}