#include <unistd.h>
void print_number(int n);
void print_array(int *a, int n);
void negative(int n);
void positive(int n);
int print_char (char c);

int print_char(char c)
{
  return (write(1, &c, 1));
}

void print_number(int n)
{
  if (n<0){
    print_char('-'); /*prints negative sign*/
    negative(n);
  }
  else{
    positive(n); /*sets second condition for positive*/
  }
}

void negative(int n)
{

  int x;

  x=n%10; /*shows last digit */
  x=x*(-1); /*inverse function for negative*/
  x=x+48; /*prints using ascii*/
  n=n/10; /*remove last digit to get other digits*/
  if (n!=0)
    {
      negative(n); /*call negative variable*/
    }
  print_char(x);

}
/*same principle for positive*/
void positive (int n)
{
  int x;

  x=n%10;

  x=x+48;
  n=n/10;
  if (n!=0)
    {
      positive(n);
    }
  print_char(x);
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
