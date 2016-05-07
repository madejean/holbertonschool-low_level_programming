#include "str_struct.h"
int print_char(char c);
void print_number(int n);
void print_string(char *str);

/* prints struct String */
void print_string_struct(struct String *str)
{
  print_string(str->str);
  print_char(',');
  print_char(' ');
  print_number(str->length);
  print_char('\n');
}

void print_number(int n)
{
  int c,i,temp,m,x;
  c = 0;
  temp = 0;
  i = n;
  while(i != 0)
    {
      i /= 10;
      c++;
    }
  
  if (n < 0)
    {
      print_char('-');
    }
  i = n;
  x = c;
  while (x > 1)
    { 
      i /= 10;
    }
    m = i - (temp * 10); 
    temp = i;     
    if (m < 0)
      {
	m *= (-1);
      }
    print_char(m + 48); 
    c--; 
}

void print_string(char *str)
{
  int i;
  i = 0;
  while(str[i]) 
    {
      print_char(str[i]);
      i++;
    }
}
