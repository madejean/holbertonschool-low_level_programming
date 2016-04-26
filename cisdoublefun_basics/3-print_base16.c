int print_char(char c);
void print_base16(void)
{
  char a = 'A';
  char n = '0';
  
  while (n <= '9')
    {
      print_char(n);
      n++;
    }
  while (a <= 'F')
    {
      print_char(a);
      a++;
    }
  return;
}
