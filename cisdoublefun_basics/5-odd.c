int print_char(char c);
char odd(int n)
{
  if ((n & 1) == 1)
    {
      print_char('O');
    }

  else
    {
      print_char('E');
    }

  return n;
}
