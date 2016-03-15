#include "my_functions.h"
void print_diagonal(int n)
{
  int x;
  int y;

  for (x = 1; x <= n; x++) 
    {
      for (y = 1; y < x; y++) 
	{                       
	  print_char(' ');   
	}
      print_char('\\');
      print_char('\n');
    }

  if (n <= 0)
    {
      print_char('\n');
    }
}
