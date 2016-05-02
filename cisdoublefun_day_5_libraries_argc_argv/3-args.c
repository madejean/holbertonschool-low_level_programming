#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}

int main (int argc, char **argv)
{
  int i;
  int j;
  i = 0;

  while (i < argc)
    {
      j = 0;
      while (argv[i][j] != '\0')
	{
	  print_char(argv[i][j]);
	  j++;
	}
      print_char('\n'); 
      i++;
    }
  return 0;
}
