int print_char(char c);
void positive_or_not(int n)
/*usage of is statements to print function in 4-main.c*/
{
  if (n>0)
    {
      print_char('P');
    }
  else if (n<0)
    {
      print_char('N');
    }
  else
    {
      print_char('Z');
    }
}
