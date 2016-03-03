int str_len(char *s)
{
  int c = 0;

  while (*(s + c)) //loop to count the length of string starting from the str variable to c, the xth element of the array
    c++;

  return c;
}
