#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int print_char(char c);
int cp(int dest, int src);

int main(int argc, char *argv[])
{
  int fd1;
  int fd2;

  if (argc!=3)
    {
      return 1;
    }

  fd1 = open(argv[1], O_RDONLY);
  if (fd1 == -1 )
    {
      return 1;
    }

  fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
  if (fd2 == -1)
    {
      return 1;
    }
  if (cp(fd2, fd1))
    {
      return 1;
    }
  close(fd1);
  close(fd2);
  return 0;
}

int cp(int dest, int src)
{
  int i;
  char buff;

  while ((i = read(src, &buff, 1)))
{
    if (i == -1)
      {
	return 1;
      }
    else if (write(dest, &buff, 1) == -1)
      {
	return 1;
      }
  }
  return 0;
}
