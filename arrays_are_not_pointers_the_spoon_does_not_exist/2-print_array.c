void print_array(int *a, int n)
{
  int *a[5] = {98, 402, 198, 298, 1024};
 
  for (n = 0; n < 5; n++) {
    a[n] = &var[n];
  }
  for (n = 0; n < 5; n++) {
    print_char(*a)
      }
}
