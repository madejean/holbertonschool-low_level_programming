int first_digit(int n) {
  int first;
  first=0;
  while (n != 0) {
    first = n;
    n = n / 10;
  }
  if (first < 0) {
    first = first * (-1);
  }
  return first;
}
