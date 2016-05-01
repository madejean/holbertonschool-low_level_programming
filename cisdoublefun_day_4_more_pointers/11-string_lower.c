int string_lower(char *s)
{
  int i;
  i = 0;

  while (s[i] != '\0')
    {
      if (s[i] >= 'a' &&  s[i] <= 'z')
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
