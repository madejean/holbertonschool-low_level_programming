#include <stdlib.h>
#include "str_struct.h"
/*free string after malloc a string*/
void free_string_struct(struct String *str)
{
  free(str->str);
  free(str);
}
