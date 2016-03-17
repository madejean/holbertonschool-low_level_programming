 int str_len(const char *str)
  {
    int i;
    i = 0;

    while (str[i]) {
      i++;
    }
      return i;
  }

   char *string_copy(char *dest, const char *src)
    {
      int i;
      int l;
      i = 0;
      l = str_len(src);

      for  (; i <= l && src[i] != '\0'; i++)
	dest[i] = src[i];
      for ( ; i <= l; i++)
	dest[i] = '\0';
  
  return dest;
}
