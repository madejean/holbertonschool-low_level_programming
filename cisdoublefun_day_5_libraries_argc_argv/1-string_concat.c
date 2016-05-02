char *string_concat(char *dest, const char *src)
{
  int i;
  int j;
  i = 0;
  j = 0;

  while (dest[i] != '\0')
    {
      ++i;
    } 
  while (src[j])
    {
      dest[i]=src[j];
      j++;
      i++;
    }
  return dest;
}
