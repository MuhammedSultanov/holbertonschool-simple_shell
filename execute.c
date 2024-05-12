#include "main.h"

void exec_function(char **arr)
{
  pid_t child;
  char *pathname;
  int status = 0;
  
  child = fork();
  pathname = get_file_path(arr[0]);
  
  built_in(arr, status);
  if (child == -1)
  {
    perror("This cause an error: ");
    exit(1);
  }
  else if (child == 0)
  {
    
    if (execve(pathname, arr, environ) == -1)
    {
      fprintf(stderr, "%s: 1: %s: not found\n", *arr, *arr);
    }
  }
  else
  {
    wait(&status);
  }
  free(pathname);
}
