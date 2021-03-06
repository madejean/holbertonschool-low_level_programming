#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "my_functions.h"
#define SUCESSFUL 0
#define FAILURE 1

int main (__attribute__((unused)) int argc, __attribute__((unused)) char *argv[], char *envp[]){
  char **envp_c, **alias, *line, **args, **semicolon, **d_ampersand, **d_or;
  int status, i, j, k;
  envp_c = copy_envp(envp);
  alias = NULL;
  do{
    print_char('$');
    print_char(' ');
    line = read_line(0);
    semicolon = string_split(line, ';');
    free(line);
    for (i = 0; semicolon[i]; i++){
      d_ampersand = string_split(semicolon[i], '&');
      for (status = 0, j = 0; d_ampersand[j]; j++){
        if (status == 0){
          d_or = string_split(d_ampersand[j], '|');
          for (status = 1, k = 0; d_or[k]; k++){
              if (status != 0){
                args = string_split(d_or[k], ' ');
                status = shell_execute(args, &envp_c,d_or,d_ampersand, semicolon);
                free_tab(args);
              }
          }
          free_tab(d_or);
        }
      }
      free_tab(d_ampersand);
    }
    free_tab(semicolon);
  } while (1);
  free_tab(envp_c);
  return 1;
}

void print_line(char *line){
        while(*line){
          line++;
          print_char(*line);
        }
}

int execve_function(char *name, char **args, char **envp){
  pid_t pid;
  int status;
  pid = fork();
  if (pid == 0){
    execve(name, args, envp);
    perror(args[0]);
    free(name);
    free_tab(args);
    free_tab(envp);
    exit(FAILURE);
  }
  else if (pid < 0){
    perror("fork");
  }
   do {
    waitpid(pid, &status, WUNTRACED);
  } while (!WIFEXITED(status) && !WIFSIGNALED(status));
  if ( WIFEXITED(status) ) {
    printf("Exit status was %d\n", WEXITSTATUS(status));
  }
  return status;
}

int shell_fork_and_run(char **args, char **envp){
  /*pid_t pid, wpid;*/
  int status, fd;
  status = 1;
  char *envp_path = NULL;
  if (get_index(args[0],'/') == NULL){
    if (envp_path = search_dir(args, envp)){
      status = execve_function(envp_path, args, envp);
    }
  }
  else{
    if ((fd = open(args[0], O_RDONLY)) > 0){
      close(fd);
      status = execve_function(args[0], args, envp);
    } 
    else {
      perror("open error");
    }
  }
  free(envp_path);
  return status;
}

char *get_index(char *src, char character){
  while (*src){
     if (*src == character) return src;               
     *src++;  
  }
  return NULL;
}

char **copy_envp(char *envp[]){
  char **copy_e;
  int i, length;
  for (i = 0; envp[i]; i++);
  copy_e = malloc(sizeof(char *) * (i+1));
  copy_e[i] = NULL;
  for (i = 0; envp[i]; i++){
    length = string_length(envp[i]);
    copy_e[i] = malloc(sizeof(char)*(length+1));
    write_to_str(envp[i],copy_e[i], '\0');
  }
  return copy_e;
}

char **add_envp(char *envp[], char *add_new){
  char **copy_e;
  int i, length;
  for (i = 0; envp[i]; i++);
  copy_e = malloc( sizeof(char *) * (i+2) );
  copy_e[i+1] = NULL;
  length = string_length(add_new);
  copy_e[i] = malloc(sizeof(char)*(length+1));
  write_to_str(add_new,copy_e[i], '\0');
  for (i = 0;envp[i];i++){
    length = string_length(envp[i]);
    copy_e[i] = malloc(sizeof(char)*(length+1));
    write_to_str(envp[i],copy_e[i], '\0');
  }
  free_tab(envp);
  return copy_e;
}

char **remove_envp(char *envp[], char *remove_ptr){
  char **copy_e;
  int i, j, length;
  for (i = 0; envp[i]; i++);
  copy_e = malloc(sizeof(char *) * (i));
  copy_e[i-1] = NULL;
  for (i = 0, j = 0; envp[i]; i++){
    if (envp[i] != remove_ptr){
      length = string_length(envp[i]);
      copy_e[j] = malloc(sizeof(char)*(length+1));
      write_to_str(envp[i],copy_e[j], '\0');
      j++;
    }
  }
  free_tab(envp);
  return copy_e;
}

int write_to_str(char *src, char *dest, char term){
  int i;
  i = 0;
  while (src[i]) {
    dest[i] = src[i];
    i++; 
  }
  dest[i] = term;
  return i;
}

int write_to_index(char *src, char *dest, char term, char index){
  int i, count;
  i = index;
  count = 0;
  while (src[count]){
          i++;
          dest[i] = src[count];          
  }
  dest[i] = term;
  return i;
}
