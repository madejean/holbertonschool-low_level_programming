int string_upper(char *s)
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
      if ((s[i] < 'A' ||  s[i] > 'Z') && s[i] != ' ')
	{
	  p = 0;
	  break;
	}
      s++;
    }
  return p;
}
