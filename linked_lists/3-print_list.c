#include <stdlib.h>
#include "list.h"
int print_char(char c);
void print_string(char *str);

void print_list(List *list)
{
  List *node = list;
  while (node != NULL)
    {
      print_string(node->str);
      if (node->next != NULL)
	{
	  print_char(',');
	  print_char(' ');
	}
      node = node->next;
    }
  print_char('\n');
}

void print_string(char *str)
{
  while (*str)
    {
      print_char(*str);
      str++;
    }
}
