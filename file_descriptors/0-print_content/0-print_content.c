#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int print_char(char c);

int main(int argc, char* argv[]) 
{
  int fd;
  int i;
  char buff;
  i = 0;

  if (argc!=2)
    { 
      return 1;
    }

  fd = open (argv [1], O_RDONLY);
  if (fd == -1)
    {
      return 1;
    }   

  while ((i = read(fd, &buff, 1)))
    {
      if (i == -1)
	{
	  return 1;
	
	}
    print_char(buff);
  }
  close (fd);

  return 0;
}
