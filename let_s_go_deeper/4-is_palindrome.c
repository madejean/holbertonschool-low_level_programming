int is_palindrome(char *s)
{
  int i;
  int l;

  
}

int str_len(char *str, int i)
{
  if (*(str+i) == 0)
    {
      return i;
    }
  return str_len(str, i+1);
}
