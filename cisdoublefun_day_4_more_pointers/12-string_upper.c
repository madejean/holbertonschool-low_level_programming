int string_upper(char *s)
{
  int i;
  i = 0;

  while (s[i] != '\0')
    {
      if (s[i] >= 'A' &&  s[i] <= 'Z')
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