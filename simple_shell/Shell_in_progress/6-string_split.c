#include <stdio.h>
#include <stdlib.h>
#include "my_functions.h"

/*splits a string into word strings separated with a space*/
char **string_split(const char *str, char space){
  int i = 0;
  char *copy = (char *)str;
  char **split = store_number_of_strings(copy, space);
  while(*copy){
    if (*copy == space){
      copy = go_through_spaces(copy, space); /*jumps over spaces and returns pointer to next character*/
    }
    else{
      split[i] = length_string_word(copy,split[i], space); /*returns address of newly allocated space for string_word*/
      copy = string_word_copy(copy,split[i], space); /*copies string_word into the newly allocated space and returns a pointer to where it ends*/
      i++; /*so that next split[i] is accessible*/
    }
  }
  return split;
}

/*get the length of word and allocates space for it*/
char *length_string_word(char *str, char *dest, char space){
  int i;
  i = 0;
  while (*str && *str != space){ 
    i++;
    str++;
  }
  dest = malloc (sizeof(char)*(i+1));
  return dest;
}

/*copies word to *dest*/
char *string_word_copy(char *src, char *dest, char space){
 while(*src && *src != space){
      *dest = *src; 
      dest++;
      src++;
  }
  *dest = '\0';
  return src;
}

/*iterates through spaces*/
char *go_through_spaces(char *str, char space){
        /*keeps iterating until space is encountered*/
  while (*str == space){
          str++;
  }
  return str;
}

/*get the number of strings and reserves space for them*/
char **store_number_of_strings(char *str, char space){
  char **dest;
  int i = 0;
  if (*str != space) i++; 
  while (*str){
     if (*str == space){
             str = go_through_spaces(str, space);
             if (*str != '\0') i++;
     }
     str++;
  }
      /*if a string is "     how    are     you" then there are 3 blocks of spaces
       *if a string is "how    are     you" then there are 2 blocks of spaces but note on line 3 of this 
       *function we have already accounted that if initially first character is non-space or non-terminating add 1 to counter
       *so again the count is 3
       */
  dest = malloc(sizeof(char *)*(i+1));
  dest[i] = NULL; 
  return dest; 
}

/*prints two dimentional array*/
void print_tab(char **split){
  int i;
  i = 0;
  while (split[i]){
     print_line(split[i]);
     print_char('\n');
     i++;
  }
}

/*free space*/
void free_tab(char **split){
  int i;
  i = 0;
  while(split[i]){
      free(split[i]);
      i++;
  }
  free(split[i]);
  free(split);
}
