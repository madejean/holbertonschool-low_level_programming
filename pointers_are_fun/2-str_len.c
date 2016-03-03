int str_len(char *str)
{
  int c = 0;

  while (*(str + c))
    c++;

  return c;
}
