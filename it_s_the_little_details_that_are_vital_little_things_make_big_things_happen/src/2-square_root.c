int calculation(int n, int x);

int square_root(int n)
{
  return calculation(n, 1);
}

int calculation(int n, int x)
{
  if (x * x == n) { 
    return x;}
  else if (x * x > n) {
    return -1;
  }
  return calculation(n, x+1);
}
