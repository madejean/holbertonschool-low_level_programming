int strings_compare(const char *s1, char *s, int n)
{
  while (*s1 && (*s1 == *s))
    {
      s1++;
      s++;
    }
  return (s1[n] - s[n]);
} 
