int string_lower(char *s)
{
  int i;
  i = 1;

  if (*s == '\0')
    { 
      return 1;
    }

  while (*s)
    {
      if ( ( *s<'a' || *s>'z' ) && *s!=' ')
	{
	  i = 0;
	  break;
	}
      s++;
    }
  return i;
}
