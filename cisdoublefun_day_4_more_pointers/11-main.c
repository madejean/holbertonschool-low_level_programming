#include <stdio.h>
int string_lower(char *s);

int main(void)
{
  char s[] = "sdy";
  int p;

  p = string_lower(s);
  printf("%d\n", p);
  return 0;
}
