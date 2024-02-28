bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int l{0}, r{n - 1};
  while (l <= r) {
    if (array[l] != array[r] || (l > 0 && array[l] < array[l - 1])) {
      return false;
    }
    l++;
    r--;
  }
  return true;
}