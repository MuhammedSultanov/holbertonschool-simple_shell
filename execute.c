#include "main.h"
/**
* execute_command - execute the path or command that given
* @storage: buffer (input from shell)
* @arr: arguments array
*
*/
void execute_command(char *storage, char **arr)
{
	if (execve(storage, arr, environ) == -1)
	{
		perror("Error");
		free(storage);
		exit(EXIT_FAILURE);
	}
}
