#include "main.h"
/**
 * get_input - this code get input from user
 *
 * Return: void
 */
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
	if (storage[size - 1] == '\n')
	{
		storage[size - 1] = '\0';
	}
	return (storage);
}
