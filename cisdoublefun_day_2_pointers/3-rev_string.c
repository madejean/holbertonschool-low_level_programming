char *rev_string(char *str)
{
  int i;
  int j;
  char temp;
  i = 0;
  
  while (str[i])
    {
      i++;
    }
  j = i - 1;
  i = 0;
  while (j > i)
    {
      temp = str[i];
      str[i] = str[j];
      str[j] = temp;
      j--;
      i++;
    }
  return str;
}
