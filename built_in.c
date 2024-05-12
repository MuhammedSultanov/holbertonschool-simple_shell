#include "main.h"


int built_in(char **arr, int status)
{
        int i = 0;
  if (strcmp(*arr, "env") == 0)
  {
    print_env();
  }
  if (strcmp(*arr, "exit") == 0)
  {
          while (arr[i])
          {
                  free(arr[i]);
                  i++;
          }
    free(arr);
    if (WIFEXITED(status))
      exit(WEXITSTATUS(status));
  }
  return 0;
}
