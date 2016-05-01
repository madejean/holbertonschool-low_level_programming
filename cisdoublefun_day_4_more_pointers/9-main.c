#include <stdio.h>
int string_alpha(char *string);

int main(void)
{
  char s[] = "2\n";
  int p;

  p = string_alpha(s);
  printf("%d\n", p);
  return 0;
}
