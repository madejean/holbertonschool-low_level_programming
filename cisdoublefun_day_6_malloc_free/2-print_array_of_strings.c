#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int total_length(char **str);

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_array_of_strings(char **a)
{
  char *arr;
  int i;
  int j;
  int size;
  i = 0;
  j = 0;
  size = total_length(a);

  arr = malloc(size * sizeof(char));

  while (a[i] != '\0')
    {
      j = 0;
      while (a[i][j] != '\0')
	{
	  arr[j] = a[i][j];
	  print_char(arr[j]);
	  j++;
	}
      print_char(' ');
      i++;
    }
  print_char('\n');
}

int total_length(char **str)
{
  int i;
  int j;
  i = 0;
  j = 0;

  while (str[i] != '\0')
    {
      while (str[i][j] != '\0')
	{
	  j++;
	}
      i++;
    }
  return j;
}
