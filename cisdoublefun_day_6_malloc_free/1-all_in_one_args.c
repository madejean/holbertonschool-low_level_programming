#include <stdlib.h>

int str_len(char *str);

char *all_in_one_args(int ac, char **av) 
{
  char *a;
  int i;
  int j;
  int size;
  i = 0;
  j = 0;
  size = 0;

  size += str_len(av[i]) + 1;
  a = malloc((size + 1) * sizeof(char));

  while (i < ac)
    {
      i++;
    } 
  while (av[i][j] != '\0')                                                  
    {                                                                       
      a[j] = atoi(av[i]);                                                   
      i++;
      j++;                                                                  
    }                                                                       
  a[j] = '\0'; 
  return a;
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




