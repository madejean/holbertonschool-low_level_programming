int first_digit(int n){
  int first;
  for (n = 0; n != 0; n++) {
    first = n;
    n = n / 10;
  }
  if (n < 0) {
    first = n * (-1);
    }
  return first;
}