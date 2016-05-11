#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int print_char(char c);

int main(int argc, char *argv[])
{
  struct stat attributes;

  if (argc != 2)
    {
      return 1;
    }
  if (lstat(argv[1], &attributes) < 0) 
    {
      return 1;
    }
  if (S_ISDIR(attributes.st_mode))
    print_char('d');
  else print_char('-');
  if (attributes.st_mode & S_IRUSR)
    print_char('r');
  else print_char('-');
  if (attributes.st_mode & S_IWUSR)
    print_char('w');
  else print_char ('-');
  if (attributes.st_mode & S_IXUSR)
    print_char('x');
  else print_char('-');
  if (attributes.st_mode & S_IRGRP)
    print_char('r');
  else print_char('-');
  if (attributes.st_mode & S_IWGRP)
    print_char('w');
  else print_char('-');
  if (attributes.st_mode & S_IXGRP)
    print_char('x');
  else print_char('-');
  if (attributes.st_mode & S_IROTH)
    print_char('r');
  else print_char('-');
  if (attributes.st_mode & S_IWOTH)
    print_char('w');
  else print_char('-');
  if (attributes.st_mode & S_IXOTH)
    print_char('x');
  else print_char('-');
  
  print_char('\n');
  
  return (0); 
}
