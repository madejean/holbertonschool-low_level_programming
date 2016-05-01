int string_digit(char *s)
{
  int i;
  i = 0;

  while (s[i] != '\0')
    {
      if (s[i] >= '0' &&  s[i] <= '9')
	{
	  return 1;
	} 
      else 
	{
	  return 0;
	}
      i++;
    }
  return i;
}
