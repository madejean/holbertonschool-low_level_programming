int string_printable(char *s)
{
  int i;
  int p;
  i = 0;
  p = 1;

  if (s[i] == '\0')
    {
      return 1;
    }
  while (s[i] != '\0')
    {
      if (s[i] < 31 ||  s[i] > 126) /*all printable characters in ascii table*/
	{
	  p = 0;
	  break;
	}
      s++;
    }
  return p;
}
