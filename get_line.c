#include "main.h"

/**
* read_input - reads user input
* Return: returns pointer to getted input string
*/

char *read_input(void)
{
	char *input_buffer;
	size_t buf_size;
	ssize_t nread;

	input_buffer = NULL;
	buf_size = 0;
	nread = getline(&input_buffer, &buf_size, stdin);

	if (nread == -1)
	{
		if (isatty(STDIN_FILENO))
		{
			write(STDOUT_FILENO, "\n", 2);
		}
		free(input_buffer);
		exit(0);
	}

	return (input_buffer);
}
