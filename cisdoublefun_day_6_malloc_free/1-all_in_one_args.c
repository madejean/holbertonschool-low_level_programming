#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
char *string_concat(char *dest, const char *src);
int str_len(char *str);

char *all_in_one_args(int ac, char **av) 
{
  char *a;
  int i;
  int j;
  int size;
  int c;
  i = 0;
  size = 0;
 
 while (i < ac)
    {
      size += str_len(av[i]) +1;
      i++;
    } 
 a = malloc(size * sizeof(char));
 
 if (a == NULL)
   {
     return NULL;   
   }

 i = 0;
 while (i < ac)                                                  
   {   
     j = 0;
     while (av[i][j] != '\0')
       {
	 a[c] = av[i][j];
	 j++;
	 c++;
       }
     a[c] = ('\n');
     c++;
     i++;
   }                
 
 a[c] = '\0'; 
 
 return (a);
}


int str_len(char *str) 
{
  int i;
  i = 0;
  
  while (*str != 0) 
    {
      i++;
      str++;
    }
  return i;
}

char *string_concat(char *dest, const char *src)
{
  int i;
  int j;
  i = 0;
  j = 0;

  while (dest[i] != '\0')
    {
      ++i;
    } 
  while (src[j])
    {
      dest[i]=src[j];
      j++;
      i++;
    }
  return dest;
}


