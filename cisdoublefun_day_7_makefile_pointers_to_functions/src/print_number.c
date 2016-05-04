int print_char(char c);

int count_digits(int n)
{
  int i;
  i = 0;
  while (n != 0)
    {
      i++;
      n /= 10;
    }
  return i;
}

void print_digits(int n, int c)
{
  int nc, temp, t;
  temp = 0;
  while (c > 0)
    {
      nc = n;
      t = c;
      while (t > 1)
	{
	  nc /= 10;
	  t--;
	}
      t = nc - (temp * 10);
      temp = nc;
      if (t < 0)
	t *= (-1);
      print_char(t + 48);
      c--;
    }
}


void print_number(int n)
{
  int c;

  if (n == 0)
    {
      print_char('0');
      return;
    }
  c = count_digits(n);
  if (n < 0) print_char('-');
  print_digits(n, c);
}
