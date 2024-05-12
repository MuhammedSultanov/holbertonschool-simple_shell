#include "main.h"

char *get_input(void)
{  
  char *storage = NULL;
  size_t size = 0;
  int a;

  a = getline(&storage, &size, stdin);

  if (a == -1)
  {
    free(storage);
    exit(EXIT_FAILURE);
  }

  return storage;
}
