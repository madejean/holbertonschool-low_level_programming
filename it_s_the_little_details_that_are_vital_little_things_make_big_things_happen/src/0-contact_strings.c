#include <unistd.h>

int print_char(char c)
{
  return (write(1, &c, 1));
}
char *concat_strings(char *dest, const char *src)
{
  int i;
  int j;

  for(i=0; dest[i]!='\0'; ++i); /*get length string*/
  /*concatenate like strcat*/
  for (j = 0; src[j]; j++, i++)
   {
      dest[i]=src[j];
   }
  return dest;
}
