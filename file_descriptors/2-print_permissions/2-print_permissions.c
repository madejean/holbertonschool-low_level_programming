#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int print_char(char c);
void fileMode(char *dest, struct stat *fileStat);
void print_string(char *str);

int main(int argc, char *argv[])
{
  struct stat attributes;
  char s[11];

  if (argc != 2)
    {
      return 1;
    }
  if (stat(argv[1], &attributes) < 0) 
    {
      return 1;
    }
 
  fileMode(s, &attributes);
  print_string(s);
  print_char('\n');
  return 0;
}

void fileMode(char *dest, struct stat *fileMode)
{
  dest[0]= (S_ISDIR(fileMode->st_mode)) ? 'd' : '-';
  dest[1]= (fileMode->st_mode & S_IRUSR) ? 'r' : '-';
  dest[2]= (fileMode->st_mode & S_IWUSR) ? 'w' : '-';
  dest[3]= (fileMode->st_mode & S_IXUSR) ? 'x' : '-';
  dest[4]= (fileMode->st_mode & S_IRGRP) ? 'r' : '-';
  dest[5]= (fileMode->st_mode & S_IWGRP) ? 'w' : '-';
  dest[6]= (fileMode->st_mode & S_IXGRP) ? 'x' : '-';
  dest[7]= (fileMode->st_mode & S_IROTH) ? 'r' : '-';
  dest[8]= (fileMode->st_mode & S_IWOTH) ? 'w' : '-';
  dest[9]= (fileMode->st_mode & S_IXOTH) ? 'x' : '-';
  dest[10]='\0';
}

void print_string(char *str)
{
 while(*str)
   {
     print_char(*str);
     str++;
   }
}
