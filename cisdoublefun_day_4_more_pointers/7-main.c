#include <stdio.h>
char *lowercase_string(char *s);

int main(void)
{
  char s[] = "hOLBERTON sCHOOL!\n";
  char *p;

  p = lowercase_string(s);
  printf("%s", p);
  printf("%s", s);
  return (0);
}
