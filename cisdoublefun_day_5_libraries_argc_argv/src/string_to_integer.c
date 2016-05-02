#include <limits.h>
int string_to_integer(char *s)
{
  int i; 
  int neg; 
  int p;
  long n;
  i = 0;
  p = 0;
  n = 0;
  neg = 1;
 
  while (s[i] != '\0') 
    {
      if (s[i] < '0' || s[i] > '9')
	{
	  if (p == 1) /*previous numbers*/ 
	    {
	      break;
	    }
	  if (s[i] == '-') 
	    {
	      neg *= -1; /*check wether the last sign is pos or neg*/
	    }
	}
      if (s[i] >= '0' && s[i] <= '9') /*go through the all the digit of the number*/
	{
	  p = 1;
	  n = n * 10 + (s[i] - '0');
	}
      i++;
    }  
  n = neg * n;
  /*condition for max min*/
  if (n > INT_MAX  || n < INT_MIN) 
    {
      return (0);
    }
  return(n);
} 
