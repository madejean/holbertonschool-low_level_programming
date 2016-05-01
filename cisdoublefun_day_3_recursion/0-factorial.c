int factorial(int n)
{
  int i;
  int f;
  i = 1;
  f = 1;

  if (n < 0)
    {
      return -1;
    }

 while (i <= n)
    {
      f *= i;
      i++;
    }
 return f;
}
