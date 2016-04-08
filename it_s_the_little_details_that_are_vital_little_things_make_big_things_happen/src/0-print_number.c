int print_char(char c);
void negative(int n);
void positive (int n);

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
 

 
