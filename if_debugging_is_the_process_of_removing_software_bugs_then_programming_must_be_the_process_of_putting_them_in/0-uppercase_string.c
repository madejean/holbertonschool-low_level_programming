char *uppercase_string(char *str)
{
  int i; 
  for (i = 0; str[i]; i++)
    {
      if (str[i] >= 97 && str[i] <= 122)
	{
	  str[i] = str[i] - 32; 
	}
    }

  return str; 
}
