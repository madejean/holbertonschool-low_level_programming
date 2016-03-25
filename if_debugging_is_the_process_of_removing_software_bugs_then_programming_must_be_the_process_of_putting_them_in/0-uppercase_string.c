char *uppercase_string(char *str)
{
  int i; 
  /*do loop to go through the string and print uppercase letter using ascii table*/
  for (i = 0; str[i]; i++)
    {
      if (str[i] >= 97 && str[i] <= 122)
	{
	  str[i] = str[i] - 32; 
	}
    }

  return str; 
}
