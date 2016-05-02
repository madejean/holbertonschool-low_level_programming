char *uppercase_string(char *s)
{
  int i;
  i = 0;

  while (s[i])
    {    
      if (s[i] >= 'a' && s[i] <= 'z') 
	{
	  s[i] -= 32; /*refers to capital alphabet on ascii table*/
	}
      i++;
    }
  return s;
}
