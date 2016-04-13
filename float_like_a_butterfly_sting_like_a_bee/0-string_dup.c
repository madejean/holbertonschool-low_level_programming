#include <stdlib.h>

char *string_dup(char *str) {
  int i;
  char *copy;

  for (i = 0; str[i] != '\0'; i++) {}
  
  copy = malloc(sizeof(char) * i);
  
  while (i--) {
    copy[i] = str[i]; 
  } 
  if (copy == NULL) {
    return NULL;
  }
  return copy;
}
