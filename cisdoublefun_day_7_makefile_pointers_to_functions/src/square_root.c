int calculate_square_root(int n, int x);

int square_root(int n)
{
  if (n == 1)
    {
      return 1;
    }
  if (n == 0)
    {
      return 0;
    }
  if (n < 0)
    {
      return -1;
    }
  return calculate_square_root(n, 1);
}

int calculate_square_root(int n, int x)
{
  if (x * x == n) 
    { 
      return x;
    }
  if (x * x > n) 
    {
      return -1;
    }
  return calculate_square_root(n, x+1);
}
