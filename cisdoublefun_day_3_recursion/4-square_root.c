int square_root(int n)
{
  int i;
  i = 1;

  while (i <= n)
    {
      if (n == i*i)
	{
	  return i;
	}
      i++;
    }
  return (-1);
}
