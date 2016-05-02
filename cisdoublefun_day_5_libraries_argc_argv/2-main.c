#include <stdio.h>
char *string_nconcat(char *dest, const char *src, int n);

int main()
{
  char nconcat[32] = "Holberton ";
  char *s;

  s = string_nconcat(nconcat, "School!!!!", 6);
  printf("%s\n", s);
  return (0);
}
