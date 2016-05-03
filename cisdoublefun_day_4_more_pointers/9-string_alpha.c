int string_alpha(char *s)
{
  int i;
  i = 1;

  if (*s == '\0')
    {
      return 1;
    }

  while (*s)
    {
      if ( ( *s<'a' || *s>'z' ) && *s!=' ' && ( *s<'A' || *s>'Z' ) )
	{
	  i = 0;
	  break;
	}
      s++;
    }
  return i;
}
