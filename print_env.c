#include "main.h"
/**
 * handle_env - handle the first argv element was a env
 * @storage: buffer
 *
 * Return: status
 */
void handle_env(char *storage)
{
	char **env;
	int i = 0;

	env = environ;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
		i++;
	}
	free(storage);
	exit(EXIT_SUCCESS);
}

