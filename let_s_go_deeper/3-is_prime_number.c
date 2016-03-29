int prime_num(int n, int i);
int is_prime_number(int n)
{
  return prime_num(n, 2);
}

int prime_num(int n, int i)
{
  if (n <= 1)
    {
      return 0;
    }
  else if (n % i == 0)
	{
	  return 0;
	}
  else if (i > n/2)
    {
      return 1;
    }
  return prime_num(n, i + 1);
}
