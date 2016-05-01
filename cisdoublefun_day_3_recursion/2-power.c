int power(int x, int y)
{
  int n;
  n = 1;

  if (x < 0 || y < 0)
    {
      return -1;
    }
  
  while (y != 0)
    {
      n *= x;
      y--;
    }
  return n;
}
