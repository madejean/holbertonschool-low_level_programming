void reverse_array(int *a, int n){
  int x;
  int d;
  int temp;
  d = n / 2;
  n--;

 for(x = 0; x < d; x++) {
    temp = a[x];
    a[x] = a[n-x];
    a[n-x] = temp;
    x++;
  }
}
