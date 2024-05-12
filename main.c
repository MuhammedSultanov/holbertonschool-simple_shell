#include "main.h"


int main(void)
{
  char *storage;
  char **arr;

  while (1)
  {
    if (isatty(STDIN_FILENO))
    {
      write(STDOUT_FILENO, "shell$ ", 7);
    }
    
    storage = get_input();
    arr = make_array(storage);
    exec_function(arr);

    free(arr);
    free(storage);
  }

  return 0;
}
