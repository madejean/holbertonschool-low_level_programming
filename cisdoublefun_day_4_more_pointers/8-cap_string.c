char *cap_string(char *s)
{
  int i;
  i = 0;

  while (s[i])
    {
      if (s[0] > 'Z')
	{
	  s[0] -= 32;
	}
      if ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i+1] >= 'a' && s[i] <= 'z')
	  {
	    s[i+1] -= 32;
	  }
	i++;
    }	
  return s;
}
