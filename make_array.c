#include "main.h"



char **make_array(char *line)
{
  char *token;
  char **array;
  int index = 0;

  array = malloc(sizeof(char) * 1024);
  token = strtok(line, " \n");

  while (token)
  {
    array[index] = token;
    token = strtok(NULL, " \n");
    index++;
  }

  return array;
}
