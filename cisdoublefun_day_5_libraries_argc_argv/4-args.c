#include <unistd.h>
int print_char(char c)
{
  return (write(1, &c, 1));
}
void print_len(char *str)
{
  int i;
  
  i = 0;
  
  while (str[i] != '\0')
    {
      print_char(str[i]);
      i++;
    }

  print_char('\n');
}

int main(int argc, char **argv)
{
  int i;
  i = argc - 1;
  
  while (i >= 0)
    {
      print_len(argv[i]);
      i--;
    }
  return (0);
}
