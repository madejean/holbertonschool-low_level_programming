#include <unistd.h>
#include <stdlib.h>
void print_number(int n);
int print_char(char c) 
{
  return (write(1, &c, 1));
}

int (*get_op_func(char c))(int a, int b);

int main(int ac, char **av)
{
  int n;

  int (*op_func)(int a, int b);

  if (ac != 4)
    {
      return 1;
    }
  op_func = get_op_func(*av[2]);
  if (op_func == 0)
    {
      return 1;
    }
  n = op_func(atoi(av[1]), (atoi(av[3])));
  print_number(n);
  print_char('\n');
  return 0;
}

void print_number(int n)
{
  int y;
  int x;
  int m; 
  int k; 
  int p;

  m = 0; 
  x = n;
  /*loop that goes through array and count number of digits*/
  for (y = 0; x != 0; y++)
    x = x / 10; 
  if (n < 0)    /*print neg sign*/
    print_char('-');
  while (y > 0) {
    x = n;
    p = y;
    for(; p > 1; p--){  /*get last digit*/
      x = x / 10;
    }
    k = x - (m*10);  /*rm last digit*/
    m = x; 
    if (k < 0){  /*print positive*/
      k = k *(-1);
    }
    print_char(k + 48);
    y--;
  }
}

void print_array(int *a, int n) {
  int x;
  x = 0;
  for (;x < n; x++){
    print_number(*(a+x)); /*prints number of the array*/ 
    if (x < (n-1)) /*adds comma and space for the next digits*/ 
      { 
	print_char(',');
	print_char(' ');
      }
  }
  print_char('\n');
}
