
bool is_palindrome(int integers[], int length) {
  if (length <= 0) {
    return false;
  }
  int l{0}, r{length - 1};
  while (l <= r) {
    if (integers[l] != integers[r]) {
      return false;
    }
    l++;
    r--;
  }
  return true;
}
int sum_array_elements(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  int sum{};
  for (int i = 0; i < length; i++) {
    sum += integers[i];
  }
  return sum;
}
int sum_if_palindrome(int integers[], int length) {
  if (length <= 0) {
    return -1;
  }
  if (is_palindrome(integers, length)) {
    return sum_array_elements(integers, length);
  } else {
    return -2;
  }
}