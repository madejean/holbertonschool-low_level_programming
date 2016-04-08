int print_char(char c);
void print_string(char *str)
{
  /*loop to print the string in pointer *str*/
  while(*str) {
    print_char(*str);
    str++;
  }
}
