#include <unistd.h>
int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_last_digit(int n)
{
  if (n<0) {
    n=n*(-1);
  }
 n=n%10;
 n= n+48; 

 print_char (n);
}

