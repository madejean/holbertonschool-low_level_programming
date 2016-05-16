#include <unistd.h>
#include <stdlib.h>
#include "my_functions.h"
/*prints the content of a file 
  on the standard output*/
char *read_line(const int fd){
  char *line;
  length(fd, 0, &line, '\0');
  return line;
}

/*allocates space for the length*/
void length(const int fb/*frame buffer*/, int i, char **line, char check){
  char buf;
  if (read(fb, &buf, 1) && buf != '\n'){ /*&& check=='\0'*/
       if (buf == 34 || buf == 39 || buf == 96){ 
       if (check == buf) check = '\0';
        else check = buf;
        length(fb, i+1, line, check);
      }
      else if (buf != '\b'){
        length(fb, i+1, line, check);
      }
      
      else{
        if (buf == 34 || buf == 39 || buf == 96){
          if (check == buf) check = '\0';
          else check = buf;
        }
        write(1, &buf, 1);
        length(fb, i, line, check);
      }
  }
  else if(check != '\0'){
    print_char('>');
    print_char(' ');
    /*check='\0';*/
    length(fb, i+1, line, check);
  }
  else{
    *line = malloc(sizeof(char)*(i+1));
    (*line)[i] = '\0';
    return;
  }
  (*line)[i] = buf;
}
