
int count_evens(int number) {
  if (number < 1) {
    return 0;
  }
  if (number % 2 == 0) {
    return number / 2;
  }
  if (number % 2 != 0) {
    return number - ((number / 2) + 1);
  }
  return 0;
}